int  sensorPin  =  A0;
int  sensorValue =  0;  // variable to store the value coming from the sensor

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    sensorValue =  analogRead(sensorPin);
    Serial.println(sensorValue);
    delay(1000);
}
