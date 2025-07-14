int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buttonApin, INPUT_PULLUP);
    pinMode(buttonBpin, INPUT_PULLUP);
}

void loop() {
    // If the button A is pressed, LED turns on
    if(digitalRead(buttonApin) == LOW) {
        digitalWrite(ledPin, HIGH);
    }

    // If the button B is pressed, LED turns off
    if(digitalRead(buttonBpin) == LOW) {
        digitalWrite(ledPin, LOW);
    }
}