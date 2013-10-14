#include <Servo.h>

Servo servo1;
int position1 = 127;
int direction1 = 1;

void setup(){
  servo1.attach(3);
}

void loop(){

  // Standard servo sweep from 0-180 degrees
  if(position1 == 180 || position1 == 0){
    direction1 *= -1;
  }

  position1 += direction1;
  servo1.write(position1);
  delay(20); // slow it down to give servo time to reach position
}

