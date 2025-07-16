#include "HCSR04.h"

#define TRIG_PIN 12
#define ECHO_PIN 11


void setup() {
   Serial.begin(9600);
   HCSR04.begin(TRIG_PIN, ECHO_PIN);
   delay(1000);
}

void loop() {
   double* distances = HCSR04.measureDistanceCm();
   Serial.print(distances[0]);
   Serial.println(" cm");
   Serial.println("---");

   delay(1000);
}
