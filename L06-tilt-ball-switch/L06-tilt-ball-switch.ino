int ledPin = 13;
int inputPin = 2;

void setup()
{ 
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT_PULLUP);
} 

void loop() 
{  
  int digitalVal = digitalRead(2);
  // When the sensor is tilted, LED turns off
  if(HIGH == digitalVal) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH); 
  }
}