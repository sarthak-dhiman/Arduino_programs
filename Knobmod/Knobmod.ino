


#include <Servo.h>

Servo myservo;  // create servo object to control a servo

  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(A0);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(Serial.read());                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}
