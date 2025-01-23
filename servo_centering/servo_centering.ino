#include <Servo.h>
 
Servo myservo;  // create servo object to control a servo
 
void setup()
{
  myservo.attach(9);  // attaches the servo on pin 1 to the servo object
}
 
void loop()
{
  myservo.write(90);                   // sets the servo position to 90° (is half of 180°)
  delay(15);                           // waits for the servo to get there
}
