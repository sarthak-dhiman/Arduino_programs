#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 in PCF8574 by NXP and Set to 0x3F in PCF8574A by Ti
LiquidCrystal_I2C lcd(0x3F, 16, 2);

byte customChar[] = {
  B00100,
  B11010,
  B11001,
  B00001,
  B00001,
  B11001,
  B11010,
  B00100
};

void setup() {
  lcd.begin(20,4);
  lcd.createChar(0, customChar);
  lcd.home();
  lcd.write(0);
}

void loop() { }
