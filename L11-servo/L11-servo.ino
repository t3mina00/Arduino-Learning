#include <Servo.h>

Servo myservo;

int pos = 0;    // variable to store the servo position
int pin = 9;

void setup() {
  myservo.attach(pin);
}

void loop() {
  // Go from 0 degrees to 180 degrees
  for(pos = 0; pos <= 180; pos += 1) { 
    // Tell servo to go to position in variable 'pos'
    myservo.write(pos);              
    delay(15);                       
  }
  // Go from 180 degrees to 0 degrees
  for(pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(15);                       
  }
}
