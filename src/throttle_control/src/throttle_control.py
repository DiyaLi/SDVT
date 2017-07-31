#!/usr/bin/env python

import serial,sys, time
ser=serial.Serial('/dev/ttyACM0',9600, timeout=None)

# Before running: sudo chmod 666 /dev/ttyACM0 in terminal
#time.sleep(2)
#if ser.isOpen():
#    print "Port Open"
test_input = ''
while(1):
	ser.flushInput()
	char = raw_input("Enter v (m/s): ")
	ser.write(char)
	received = []
	for n in range(0, len(char)):
		char_rec = ser.readline()
		received.append(char_rec[0:len(char_rec)-2])
	sys.stdout.write(''.join(received)+'\n')
	test_input = received
ser.close()

#while test_input != 'e':
#    
#	ser.flushInput()
#	char = raw_input("Enter String : ")
#	ser.write(char)
#	received =[]
##	for n in range(0, len(char)):
##		char_rec = ser.readline()
##		received.append(char_rec[0:len(char_rec)-2]) # remove \r\n characters
##	sys.stdout.write(''.join(received)+'\n')
#	test_input = received
#	
#ser.close()








#import rospy
#from geometry_msgs.msg import Twist


#if __name__ == '__main__':
#    #required to access ros. If this gives an error, make sure you are running roscore on your machine.
#    rospy.init_node('dumbo')
#    #advertise the topic we wish to publish. Roscore will connect us to the other processes that wish to read from this topic
#    pub = rospy.Publisher('/cmd_vel', Twist)
#    #A helpful way to print debugging information
#    rospy.loginfo("Up and running. Run Gazebo to simulate the robot and RVIZ to see the sensor data.")
#    
#	#This is the code for part 1!
#    while not rospy.is_shutdown():
#        twist=Twist()
#        twist.linear.x=0.5
#        pub.publish(twist)
#        rospy.loginfo("MOVING STRAIGHT!!")
#        rospy.sleep(8)
#        twist.linear.x = 0
#        pub.publish(twist)

#        twist.angular.z = 0.262
#        pub.publish(twist)
#        rospy.loginfo("ROTATING!!!")
#        rospy.sleep(4)
#        twist.angular.z = 0
#        pub.publish(twist)
#        rospy.sleep(1)

#	
