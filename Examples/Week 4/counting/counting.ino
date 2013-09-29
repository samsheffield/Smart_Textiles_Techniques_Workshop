// Counting cycles to create layers

int ledPin1 = 3;
int ledPin2 = 5;

int counter1 = 0;
int counter2 = 0;

void setup(){
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop(){
  // LED 1
  if(counter1 == 500){
    digitalWrite(ledPin1, HIGH);
  }
  else if(counter1==1000){
    digitalWrite(ledPin1, LOW);
    counter1 = 0; // Important: reset the counter!
  }
  counter1++;  // add 1 to counter each loop

  // LED 2
  if(counter2 == 300){
    digitalWrite(ledPin2, HIGH);
  }
  else if(counter2==800){
    digitalWrite(ledPin2, LOW);
    counter2 = 0;
  }
  counter2++;  // add 1 to counter each loop
  
  delay(10); // slow it down a little so that we can use smaller numbers
}





