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

//create subscriber toggle_led and its callback

ros::Subscriber<std_msgs::Empty> sub("toggle_led, &messageCB );
 
// set pin 13 to output and initialise ROS node and subscriber objects
void setup()
{
  pinMode(13, OUTPUT);
  nh.initNode();
  nh.subscribe(sub);
}
                                     
//spin the node each cycle to listen from the topic
void loop()
{
  nh.spinOnce();
  delay(1)
}
