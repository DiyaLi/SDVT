#!/usr/bin/env python
import rospy
import re
import os
import tf
import math

from geometry_msgs.msg import Twist

#twist.linear.x = v in m/s
#pub.publish(twist)
#rospy.sleep	
      


if __name__ == '__main__':

    #required to access ros. If this gives an error, make sure you are running roscore on your machine.
    rospy.init_node('velocity_publisher')
    
    #advertise the topic we wish to publish. Roscore will connect us to the other processes that wish to read from this topic
    pub = rospy.Publisher('/cmd_vel', Twist)

    while not rospy.is_shutdown():
	twist = Twist()
	
	#THIS PROBABLY NEEDS TO BE FIXED SO THAT IT OUTPUTS ENTIRE STRING
	while (1):
		char = float(raw_input("Enter v (m/s): "))
		twist.linear.x = char
		char2 = float(raw_input("Enter angular v (rad/s): "))
		twist.angular.z = char2
		pub.publish(twist)
	

	#get velocity information from cmd line input
	#publish to cmd_vel
	

