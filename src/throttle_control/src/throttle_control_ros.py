#!/usr/bin/env python
import roslib; roslib.load_manifest('throttle_control')
import rospy
import tf.transformations
from geometry_msgs.msg import Twist

import serial,sys, time
ser=serial.Serial('/dev/ttyACM1',9600, timeout=None)

def callback(msg):
    rospy.loginfo("Received a /cmd_vel message!")
    rospy.loginfo("Linear Components: [%f, %f, %f]"%(msg.linear.x, msg.linear.y, msg.linear.z))
    rospy.loginfo("Angular Components: [%f, %f, %f]"%(msg.angular.x, msg.angular.y, msg.angular.z))

#    # Do velocity processing here:
#    # Use the kinematics of your robot to map linear and angular velocities into motor commands

#    v_l = ...
#    v_r = ...
    test = str(msg.linear.x)
    test2 = test + 'n'
    print test2
    ser.write(test2)
#    # Then set your wheel speeds (using wheel_left and wheel_right as examples)
#    wheel_left.set_speed(v_l)
#    wheel_right.set_speed(v_r)

def listener():
    rospy.init_node('cmd_vel_listener')
    rospy.Subscriber("/cmd_vel", Twist, callback)
    rospy.spin()

if __name__ == '__main__':
    listener()

