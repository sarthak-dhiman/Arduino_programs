

#define BLYNK_PRINT Serial



#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#define BLYNK_PRINT DebugSerial
#include <Adafruit_NeoPixel.h>
#include <SoftwareSerial.h>
#define PIN 6
#define NUM_PIXELS 1
// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "*******";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "******";
char pass[] = "****";



int r,g,b,data;
void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  pixels.begin();
}
void loop()
{
  Blynk.run();
}
BLYNK_WRITE(V2)
{
r = param[0].asInt();
g = param[1].asInt();
b = param[2].asInt();
if(data==0)
static1(r,g,b);
}
BLYNK_WRITE(V3)
{
data = param.asInt();
Serial.println(data);
if(data==0)
{
  static1(r,g,b);
}
else if(data==1)
{
  animation1(); 
}
}
void static1(int r, int g, int b)
{
  for(int i=0;i<=NUM;i++)
  {
  pixels.setPixelColor(i, pixels.Color(r,g,b));
  pixels.show();
  }
}
void animation1()
{
  for(int i=0;i<NUM;i++)
  {
    pixels.setPixelColor(i, pixels.Color(255,0,0));
    pixels.show();
    delay(100);
  }
  for(int i=NUM;i>=0;i--)
  {
    pixels.setPixelColor(i, pixels.Color(0,255,0));
    pixels.show();
    delay(100);
  }
  for(int i=0;i<NUM;i++)
  {
    pixels.setPixelColor(i, pixels.Color(0,255,255));
    pixels.show();
    delay(100);
  }
  for(int i=NUM;i>=0;i--)
  {
    pixels.setPixelColor(i, pixels.Color(255,255,0));
    pixels.show();
    delay(100);
  }
}
