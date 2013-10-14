#include <Servo.h>

Servo servo1;
int direction1 = 90;

void setup(){
  servo1.attach(3);
}

void loop(){

  // Continuous servos use 0-180 to control direction and speed
  // 0 = full speed one direction
  // 180 = full speed in the opposite direction
  // 90-ish = stop
  
  direction1 = 180;
  servo1.write(direction1);
}

