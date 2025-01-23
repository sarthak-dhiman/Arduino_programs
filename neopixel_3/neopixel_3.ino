#include <Adafruit_NeoPixel.h>

//pin on the Arduino is connected to the NeoPixels
#define PIN            6 

// NeoPixels  attached to the Arduino
#define NUMPIXELS      30

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
// initialize serial
Serial.begin(9600);
// This initializes the NeoPixel library.
pixels.begin(); 
}

void loop() {

// For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
// if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int red = Serial.parseInt();
    // do it again:
    int green = Serial.parseInt();
    // do it again:
    int blue = Serial.parseInt();

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {
      red = constrain(red, 0, 255);
      green = constrain(green, 0, 255);
      blue = constrain(blue, 0, 255);

        for(int i=0;i<NUMPIXELS;i++){

          // pixels.Color takes RGB values, from 0,0,0 up to 255,255,255
          pixels.setPixelColor(i, pixels.Color(red,green,blue));
          pixels.show(); // This sends the updated pixel color to the hardware.

        }
      }
    }
}
