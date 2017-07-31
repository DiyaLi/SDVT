#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

// Module "core"
#include <opencv2/core/core.hpp>

// Module "video"
#include <opencv2/video/video.hpp>

// Output
#include <iostream>

// Vector
#include <vector>

#include "ros/ros.h"
#include "std_msgs/String.h"

using namespace std;

// >>>>> Color to be tracked
#define MIN_H_BLUE 200
#define MAX_H_BLUE 300
// <<<<< Color to be tracked

static const std::string OPENCV_WINDOW = "Image window";

class ImageConverter
{
  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  image_transport::Subscriber image_sub_;
  image_transport::Publisher image_pub_;
  string murat;
  // Camera frame
  cv::Mat frame;

  // >>>> Kalman Filter
  int stateSize;
  int measSize;
  int contrSize;

  unsigned int type;
  cv::KalmanFilter kf;

  cv::Mat state;  // [x,y,v_x,v_y,w,h]
  cv::Mat meas;    // [z_x,z_y,z_w,z_h]
  //cv::Mat procNoise(stateSize, 1, type)
  // [E_x,E_y,E_v_x,E_v_y,E_w,E_h]

  char ch;

  double ticks;
  bool found;

  int notFoundCount;

public:
  ImageConverter()
      : it_(nh_), kf(stateSize, measSize, contrSize, type), state(stateSize, 1, type), meas(measSize, 1, type)
  {
      stateSize = 6;
      measSize = 4;
      contrSize = 0;

      type = CV_32F;

      //cv::Mat procNoise(stateSize, 1, type)
      // [E_x,E_y,E_v_x,E_v_y,E_w,E_h]

      // Transition State Matrix A
      // Note: set dT at each processing step!
      // [ 1 0 dT 0  0 0 ]
      // [ 0 1 0  dT 0 0 ]
      // [ 0 0 1  0  0 0 ]
      // [ 0 0 0  1  0 0 ]
      // [ 0 0 0  0  1 0 ]
      // [ 0 0 0  0  0 1 ]
      cv::setIdentity(kf.transitionMatrix);

      // Measure Matrix H
      // [ 1 0 0 0 0 0 ]
      // [ 0 1 0 0 0 0 ]
      // [ 0 0 0 0 1 0 ]
      // [ 0 0 0 0 0 1 ]
      kf.measurementMatrix = cv::Mat::zeros(measSize, stateSize, type);
      kf.measurementMatrix.at<float>(0) = 1.0f;
      kf.measurementMatrix.at<float>(7) = 1.0f;
      kf.measurementMatrix.at<float>(16) = 1.0f;
      kf.measurementMatrix.at<float>(23) = 1.0f;

      // Process Noise Covariance Matrix Q
      // [ Ex   0   0     0     0    0  ]
      // [ 0    Ey  0     0     0    0  ]
      // [ 0    0   Ev_x  0     0    0  ]
      // [ 0    0   0     Ev_y  0    0  ]
      // [ 0    0   0     0     Ew   0  ]
      // [ 0    0   0     0     0    Eh ]
      //cv::setIdentity(kf.processNoiseCov, cv::Scalar(1e-2));
      kf.processNoiseCov.at<float>(0) = 1e-2;
      kf.processNoiseCov.at<float>(7) = 1e-2;
      kf.processNoiseCov.at<float>(14) = 5.0f;
      kf.processNoiseCov.at<float>(21) = 5.0f;
      kf.processNoiseCov.at<float>(28) = 1e-2;
      kf.processNoiseCov.at<float>(35) = 1e-2;

      // Measures Noise Covariance Matrix R
      cv::setIdentity(kf.measurementNoiseCov, cv::Scalar(1e-1));
      // <<<< Kalman Filter

      ch = 0;

      ticks = 0;
      found = false;

      notFoundCount = 0;

      // Subscrive to input video feed and publish output video feed
      image_sub_ = it_.subscribe("/forward_cam/image_raw", 1,
              &ImageConverter::imageCb, this);
      // msg sub
      ros::Subscriber sub = nh_.subscribe("chatter", 1000, &ImageConverter::chatterCallback, this);

      cv::namedWindow(OPENCV_WINDOW);
  }

  ~ImageConverter()
  {
    cv::destroyWindow(OPENCV_WINDOW);
  }

  void chatterCallback(const std_msgs::String::ConstPtr& msg)
  {
      //std::string murat;
      ROS_INFO("I heard: [%s]", msg->data.c_str());
      murat = msg->data;
  }

  void imageCb(const sensor_msgs::ImageConstPtr& msg)
  {
    cv_bridge::CvImagePtr cv_ptr;
    try
    {
      cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
      ROS_ERROR("cv_bridge exception: %s", e.what());
      return;
    }

    // >>>>> Main loop
    double precTick = ticks;
    ticks = (double) cv::getTickCount();

    double dT = (ticks - precTick) / cv::getTickFrequency(); //seconds

    // Frame acquisition
    frame = cv_ptr->image;

    cv::Mat res;
    frame.copyTo( res );

    if (found)
    {
        // >>>> Matrix A
        kf.transitionMatrix.at<float>(2) = dT;
        kf.transitionMatrix.at<float>(9) = dT;
        // <<<< Matrix A

        cout << "dT:" << endl << dT << endl;

        state = kf.predict();
        cout << "State post:" << endl << state << endl;

        cv::Rect predRect;
        predRect.width = state.at<float>(4);
        predRect.height = state.at<float>(5);
        predRect.x = state.at<float>(0) - predRect.width / 2;
        predRect.y = state.at<float>(1) - predRect.height / 2;

        cv::Point center;
        center.x = state.at<float>(0);
        center.y = state.at<float>(1);
        cv::circle(res, center, 2, CV_RGB(255,0,0), -1);

        cv::rectangle(res, predRect, CV_RGB(255,0,0), 2);
    }

    // >>>>> Noise smoothing
    cv::Mat blur;
    cv::GaussianBlur(frame, blur, cv::Size(5, 5), 3.0, 3.0);
    // <<<<< Noise smoothing

    // >>>>> HSV conversion
    cv::Mat frmHsv;
    cv::cvtColor(blur, frmHsv, CV_BGR2HSV);
    // <<<<< HSV conversion

    // >>>>> Color Thresholding
    // Note: change parameters for different colors
    cv::Mat rangeRes = cv::Mat::zeros(frame.size(), CV_8UC1);
    cv::inRange(frmHsv, cv::Scalar(MIN_H_BLUE / 2, 100, 80),
            cv::Scalar(MAX_H_BLUE / 2, 255, 255), rangeRes);
    // <<<<< Color Thresholding

    // >>>>> Improving the result
    cv::erode(rangeRes, rangeRes, cv::Mat(), cv::Point(-1, -1), 2);
    cv::dilate(rangeRes, rangeRes, cv::Mat(), cv::Point(-1, -1), 2);
    // <<<<< Improving the result

    // Thresholding viewing
    cv::imshow("Threshold", rangeRes);

    // >>>>> Contours detection
    vector<vector<cv::Point> > contours;
    cv::findContours(rangeRes, contours, CV_RETR_EXTERNAL,
            CV_CHAIN_APPROX_NONE);
    // <<<<< Contours detection

    // >>>>> Filtering
    vector<vector<cv::Point> > balls;
    vector<cv::Rect> ballsBox;
    for (size_t i = 0; i < contours.size(); i++)
    {
        cv::Rect bBox;
        bBox = cv::boundingRect(contours[i]);

        float ratio = (float) bBox.width / (float) bBox.height;
        if (ratio > 1.0f)
            ratio = 1.0f / ratio;

        // Searching for a bBox almost square
        if (ratio > 0.75 && bBox.area() >= 400)
        {
            balls.push_back(contours[i]);
            ballsBox.push_back(bBox);
        }
    }
    // <<<<< Filtering

    cout << "Balls found:" << ballsBox.size() << endl;

    // >>>>> Detection result
    for (size_t i = 0; i < balls.size(); i++)
    {
        cv::drawContours(res, balls, i, CV_RGB(20,150,20), 1);
        cv::rectangle(res, ballsBox[i], CV_RGB(0,255,0), 2);

        cv::Point center;
        center.x = ballsBox[i].x + ballsBox[i].width / 2;
        center.y = ballsBox[i].y + ballsBox[i].height / 2;
        cv::circle(res, center, 2, CV_RGB(20,150,20), -1);

        stringstream sstr;
        sstr << "(" << center.x << "," << center.y << "," << murat << ")";
        cv::putText(res, sstr.str(),
                cv::Point(center.x + 3, center.y - 3),
                cv::FONT_HERSHEY_SIMPLEX, 0.5, CV_RGB(20,150,20), 2);
    }
    // <<<<< Detection result

    // >>>>> Kalman Update
    if (balls.size() == 0)
    {
        notFoundCount++;
        cout << "notFoundCount:" << notFoundCount << endl;
        if( notFoundCount >= 100 )
        {
            found = false;
        }
        /*else
          kf.statePost = state;*/
    }
    else
    {
        notFoundCount = 0;

        meas.at<float>(0) = ballsBox[0].x + ballsBox[0].width / 2;
        meas.at<float>(1) = ballsBox[0].y + ballsBox[0].height / 2;
        meas.at<float>(2) = (float)ballsBox[0].width;
        meas.at<float>(3) = (float)ballsBox[0].height;

        if (!found) // First detection!
        {
            // >>>> Initialization
            kf.errorCovPre.at<float>(0) = 1; // px
            kf.errorCovPre.at<float>(7) = 1; // px
            kf.errorCovPre.at<float>(14) = 1;
            kf.errorCovPre.at<float>(21) = 1;
            kf.errorCovPre.at<float>(28) = 1; // px
            kf.errorCovPre.at<float>(35) = 1; // px

            state.at<float>(0) = meas.at<float>(0);
            state.at<float>(1) = meas.at<float>(1);
            state.at<float>(2) = 0;
            state.at<float>(3) = 0;
            state.at<float>(4) = meas.at<float>(2);
            state.at<float>(5) = meas.at<float>(3);
            // <<<< Initialization

            kf.statePost = state;

            found = true;
        }
        else
            kf.correct(meas); // Kalman Correction

        cout << "Measure matrix:" << endl << meas << endl;
    }
    // <<<<< Kalman Update

    // Final result
    cv::imshow("Tracking", res);

    // User key
    ch = cv::waitKey(1);
  }
};

int main(int argc, char** argv)
{
    ros::init(argc, argv, "image_converter");
    ImageConverter ic;
    ros::spin();
    return 0;
}
