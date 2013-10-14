#include <Servo.h>

Servo servo1;
int position1 = 180; // Start at 180 degrees

void setup(){
  servo1.attach(3);
}

void loop(){

  // Move to 0 degrees and stay there within a 2 second period
  if(position1 == 180){
    position1 = 0;
  }
  servo1.write(position1);
  delay(2000);
  
  // Move to 180 degrees and stay there within a 2 second period
  if(position1 == 0){
    position1 = 180;
  }
  servo1.write(position1);
  delay(2000);
}


