#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2); 

int tempPin = A0;

void setup() {
    lcd.init();
    lcd.backlight();
}
void loop() {
  int tempReading = analogRead(tempPin);
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK )) * tempK ); // Temp Kelvin
  // Convert Kelvin to Celcius
  float tempC = tempK - 273.15;            
  lcd.setCursor(0, 0);
  lcd.print("Temp         C  ");
  lcd.setCursor(6, 0);
  // Display Temperature in C
  lcd.print(tempC);
 
  delay(1000);
}
