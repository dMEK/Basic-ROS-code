// Rosserial Arduino subscriber example

#include <ros.h>
#include <std_msg/Empty.h>

//create a ROS Nodehandle object

ros::NodeHandle nh;

// create a callback for the topic toggle_led,
//whenever a value comes through this topic
//this callback will execute
//The callback will toggle the led on pin 13

void messageCb(const std_msgs::Empty&toggle_msg)
{
  digitalWrite(13, HIGH-digitalRead13); //blink the LED
}

