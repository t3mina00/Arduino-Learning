int led = 13;

void setup() {
  // Initialize the digital pin as an output
  pinMode(led, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(led, HIGH);
  delay(500);
  //delay(3000);

  // Turn the LED off
  digitalWrite(led, LOW);
  delay(500);
  // delay(3000);
}