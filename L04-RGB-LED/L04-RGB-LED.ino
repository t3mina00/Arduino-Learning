// Define pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup() {
    pinMode(BLUE, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(RED, OUTPUT);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(RED, HIGH);
}

int redValue;
int greenValue;
int blueValue;

void loop() {
    // Fading time between colors
    #define delayTime 10 

    redValue = 255;
    greenValue = 0;
    blueValue = 0;

    // Color changes, red to green
    for(int i = 0; i < 255; i += 1) {
        redValue -= 1;
        greenValue += 1;
        
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        delay(delayTime);
    }

    redValue = 0;
    greenValue = 255;
    blueValue = 0;

    // Color changes, green to blue
    for(int i = 0; i < 255; i += 1) {
        greenValue -= 1;
        blueValue += 1;
        
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
        delay(delayTime);
    }

    redValue = 0;
    greenValue = 0;
    blueValue = 255;

    // Color changes, blue to red
    for(int i = 0; i < 255; i += 1) {
        blueValue -= 1;
        redValue += 1;
        
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        delay(delayTime);
    }
}
