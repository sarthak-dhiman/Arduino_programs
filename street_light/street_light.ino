
/
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
char auth[] = "";

// Your WiFi credentials.
 Set password ="*****";
char pass[] = "88888";



void setup()

{
  

  // Debug console
  Serial.begin(9600);

 Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  
  
{
  DebugSerial.begin(9600);
  pixels.begin();
  Serial.begin(9600);
  Blynk.begin(Serial, auth);
}
}

void loop()
{
  Blynk.run();
}
