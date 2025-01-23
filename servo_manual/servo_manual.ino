#include <MFRC522.h>
#include <SPI.h>
#include <Servo.h>


#define SS_PIN 10
#define RST_PIN 9
 
MFRC522 rfid(SS_PIN, RST_PIN); // Instance of the class

MFRC522::MIFARE_Key key;

int code[] = {94,73,241,250}; //This is the stored UID
int codeRead = 0;
int Buzzer = 6;
int activate =0;
Servo myservo;
String uidString;
void setup() {
 
 Serial.begin(9600);
 SPI.begin(); // Init SPI bus
 rfid.PCD_Init(); // Init MFRC522 
 myservo.attach(5); //attach the servo to pin 5
 pinMode(Buzzer,OUTPUT); 
 myservo.write(0); // 0 degree angle for servo



}

void loop() {
 if( rfid.PICC_IsNewCardPresent())
 {
 readRFID();
 }
 delay(100);

}

void readRFID()
{
 
 rfid.PICC_ReadCardSerial();
 Serial.print(F("\nPICC type: "));
 MFRC522::PICC_Type piccType = rfid.PICC_GetType(rfid.uid.sak);
 Serial.println(rfid.PICC_GetTypeName(piccType));

// Check is the PICC of Classic MIFARE type
 if (piccType != MFRC522::PICC_TYPE_MIFARE_MINI && 
 piccType != MFRC522::PICC_TYPE_MIFARE_1K &&
 piccType != MFRC522::PICC_TYPE_MIFARE_4K) {
 Serial.println(F("Your tag is not of type MIFARE Classic."));
 return;
 }


 Serial.println("Scanned PICC's UID:");
 printDec(rfid.uid.uidByte, rfid.uid.size);

uidString = String(rfid.uid.uidByte[0])+" "+String(rfid.uid.uidByte[1])+" "+String(rfid.uid.uidByte[2])+ " "+String(rfid.uid.uidByte[3]);



 int i = 0;
 boolean match = true;
 while(i<rfid.uid.size)
 {
 if(!(rfid.uid.uidByte[i] == code[i]))
 {
 match = false;
 }
 i++;
 }

if(match)
 { if (activate==0){
 myservo.write(90); // 90 degree angle for servo (Door will open)
 Serial.println("\nDoor is open");
 delay(1000);
 activate = activate+1;
 }
 else
 { myservo.write(0); // 0 degree angle for servo (Door will close)
 activate = 0;
 Serial.println("\nDoor is close");
 delay(1000);
 }
 }
 
 else
 {
 tone(6,400,1000);
 Serial.println("\nUnknown Card");
 }


 // Halt PICC
 rfid.PICC_HaltA();

// Stop encryption on PCD
 rfid.PCD_StopCrypto1();
}

void printDec(byte *buffer, byte bufferSize) {
 for (byte i = 0; i < bufferSize; i++) {
 Serial.print(buffer[i] < 0x10 ? " 0" : " ");
 Serial.print(buffer[i], DEC);
 }
}
