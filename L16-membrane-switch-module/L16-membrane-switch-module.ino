#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;
// Define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};
byte rowPins[ROWS] = {2, 3, 4, 5}; 
byte colPins[COLS] = {6, 7, 8, 9}; 

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

void setup() {
  Serial.begin(9600);
}
  
void loop() {
  char customKey = customKeypad.getKey();
  
  if(customKey) {
    Serial.println(customKey);
  }
}
