// Arduino PWM Speed Control：
// Pin definitions for PWM speed control using 
// DFRobot Arduino Compatible Motor Shield (2A):

#include "MotorRobotBase.h"

#define Motor MotorRobotBase

void forward (Motor &m1, Motor &m2) 
{
  int speed; 
  // speed up
  for (speed = 0; speed <= 255; speed += 5) {
    m1.forward(speed);
    m2.forward(speed);
    delay(30); 
  }
  // speed down
  for (speed = 255; speed >= 0; speed -= 5) {
    m1.forward(speed);
    m2.forward(speed);
    delay(30);
  }
}

void backward (Motor &m1, Motor &m2) 
{
  int speed; 
  // speed up
  for (speed = 0; speed <= 255; speed += 5) {
    m1.reverse(speed);
    m2.reverse(speed);
    delay(30); 
  }
  // speed down
  for (speed = 255; speed >= 0; speed -= 5) {
    m1.reverse(speed);
    m2.reverse(speed);
    delay(30);
  }
}


void loop () 
{ 
  forward(left_motor, right_motor); 
 
}



