
#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN); 
Servo myservo;// Create MFRC522 instance.
int pos = 0;
void setup() 
{
  
  myservo.attach(5);
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  Serial.println("Approximate your card to the reader...");
  Serial.println();
 pinMode(7,OUTPUT);
 pinMode(6,OUTPUT);
}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "A7 B0 A5 E1") //change here the UID of the card/cards that you want to give access
  {
    myservo.write(pos=0);              // tell servo to go to position in variable 'pos'
    delay(15);
    Serial.println("Authorized access");
    Serial.println();
    
    delay(2000);  
    
  }
    
  
                  // tell servo to go to position in variable 'pos'
    delay(1000);
     myservo.write(pos=90); 
  }
    
