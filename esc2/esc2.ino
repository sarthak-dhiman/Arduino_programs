#include <Servo.h>

Servo bldc_motor; //creates a "servo" object (the ESC and motor)


void setup()
{
bldc_motor.attach (9); //attach the motor to pin 9
Serial.begin(9600);
}

void loop()
{
bldc_motor.writeMicroseconds(1500); //provides a "neutral" pulse. The ESC won't start without this.
Serial.println("BLDC motor test..");
Serial.println("Starting in...");
Serial.println("");

for (int i = 4; i >= 0; i --) //countdown timer
{
Serial.print(i+1);
Serial.println("");
delay (1000);
}


while(1)
{
Serial.println("FORWARD.");

for (int i = 1500; i <= 2000; i++)
{
int speed_value = map (i, 1500, 2000, 0, 100); //maps the signal pulse to a percentage
Serial.println(speed_value);
Serial.print('%');
bldc_motor.writeMicroseconds (i); //actually write the value to the motor
delay(10);// small delay so you can see what's happening
}

bldc_motor.writeMicroseconds (1000); //full reverse. The ESC will automatically brake the motor.
delay (500); //small delay to let things happen
bldc_motor.writeMicroseconds (1500); //give a neutral signal
Serial.print("MOTOR stopped");
delay (3000); //keep it that way for a while


Serial.print("BACKWARD");

for (int i = 1500; i >= 1000; i --)
{
int speed_value = map (i, 1500, 1000, 0, 100); //maps the signal pulse to a percentage
Serial.print (speed_value); //prints the percentage to the LCD
Serial.print ('%'); //notice the single quotation marks. I've just sent a char value, not a string because it's only 1 character
Serial.println("");

bldc_motor.writeMicroseconds (i); //actually write the value to the motor
delay(10);// small delay so you can see what's happening
}

bldc_motor.writeMicroseconds (1500);
Serial.print ("motor stopped");
delay (3000);
}
}
