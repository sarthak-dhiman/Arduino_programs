// 6 Channel Transmitter 
  #include <SPI.h>
  #include <nRF24L01.h>
  #include <RF24.h>
  const uint64_t pipeOut = 0xE9E8F0F0E1LL;   //IMPORTANT: The same as in the receiver 0xE9E8F0F0E1LL
  RF24 radio(9, 10); // select CE,CSN pin 
  struct Signal {
  byte throttle;
  byte pitch;
  byte roll;
  byte yaw;
  byte aux1;
  byte aux2;
};
  Signal data;
  void ResetData() 
{
  data.throttle = 12;   // Motor stop 
  data.pitch = 127;    // Center
  data.roll = 127;     // Center
  data.yaw = 127;     // Center 
  data.aux1 = 127;    // Center 
  data.aux2 = 127;    // Center 
  void setup()
{
  //Start everything up
  radio.begin();
  radio.openWritingPipe(pipeOut);
  radio.setAutoAck(false);
  radio.setDataRate(RF24_250KBPS);
  radio.setPALevel(RF24_PA_HIGH);
  radio.stopListening(); //start the radio comunication for Transmitter
  ResetData();
 
}
  // Joystick center and its borders 
  int mapJoystickValues(int val, int lower, int middle, int upper, bool reverse)
{
  val = constrain(val, lower, upper);
  if ( val < middle )
  val = map(val, lower, middle, 0, 128);
  else
  val = map(val, middle, upper, 128, 255);
  return ( reverse ? 255 - val : val );
}
  void loop()
{
  // Control Stick Calibration 
  // Setting may be required for the correct values of the control levers. .
  data.throttle = mapJoystickValues( analogRead(A0), 12, 524, 1020, true );  // "true" or "false" for signal direction
  data.roll = mapJoystickValues( analogRead(A3), 12, 524, 1020, true );      // "true" or "false" for servo direction 
  data.pitch = mapJoystickValues( analogRead(A2), 12, 524, 1020, false );     // "true" or "false" for servo direction 
  data.yaw = mapJoystickValues( analogRead(A1), 12, 524, 1020, false );       // "true" or "false" for servo direction 
  data.aux1 = mapJoystickValues( analogRead(A4), 12, 524, 1020, true );     // "true" or "false" for servo direction 
  data.aux2 = mapJoystickValues( analogRead(A5), 12, 524, 1020, true );     // "true" or "false" for servo direction 
}
