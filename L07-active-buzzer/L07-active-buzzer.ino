int buzzer = 12;

void setup() {
    pinMode(buzzer, OUTPUT);
}

void loop() {
    // Output at a frequency
    for(int i = 0; i < 100; i++)
    {
        digitalWrite(buzzer, HIGH);
        delay(10);
        digitalWrite(buzzer, LOW);
        delay(10);
    }
    delay(1000);
    // Output at another frequency
    for(int i = 0; i < 100; i++)
    {
        digitalWrite(buzzer, HIGH);
        delay(50);
        digitalWrite(buzzer, LOW);
        delay(50);
    }
    delay(1000);
} 
