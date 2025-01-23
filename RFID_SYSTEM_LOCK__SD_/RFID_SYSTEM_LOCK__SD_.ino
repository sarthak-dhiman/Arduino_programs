#include<SoftwareSerial.h>
#include<Servo.h>
#include<SPI.h>
#include<MFRC552.h>
#define SS_PIN 10
#define RST_PIN 9
#define PICC_0 0xD4
#define PICC_1 0x87
#define PICC_2 0x75
#define PICC_3 0XA7


    MFRC522 rfid(SS_PIN,RST_PIN);
    Servo myservo;
    int blueTx=2;
    int blueRx=3;
    SoftwareSerial mySerial(blueTx,blueRx);
    String myString="";



    void setup(){
      myservo.attach(6);
      myservo.write(0);
      mySerial.begin(9600);
      SPI.begin();
      rfid.PCD_init();
      }

      void RFID_S(){
        if(! rfid.PICC_IsNewCardPresent())
          myservo.write(90);
          delay(5000);
          myservo.write(0);
          
      
      rfid.PICC_HaltA();
      rfid.PCD_StopCrypto1();
     }
      void loop(){
        blue_motor();
        RFID_S();
      }

      
        
