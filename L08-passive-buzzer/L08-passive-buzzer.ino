#include "pitches.h"
 
int melody[] = {NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500;
 
void setup() {
  // "pinMode" not required, since using tone
 
}
 
void loop() {  
  for(int thisNote = 0; thisNote < 8; thisNote++) {
    // Generate the sound
    tone(8, melody[thisNote], duration);
    delay(1000);
  }
   
  delay(2000);
}