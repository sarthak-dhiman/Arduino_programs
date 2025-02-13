#define NOTE_B0  31
#define NOTE_C1  33
#define NOTE_CS1 35
#define NOTE_D1  37
#define NOTE_DS1 39
#define NOTE_E1  41
#define NOTE_F1  44
#define NOTE_FS1 46
#define NOTE_G1  49
#define NOTE_GS1 52
#define NOTE_A1  55
#define NOTE_AS1 58
#define NOTE_B1  62
#define NOTE_C2  65
#define NOTE_CS2 69
#define NOTE_D2  73
#define NOTE_DS2 78
#define NOTE_E2  82
#define NOTE_F2  87
#define NOTE_FS2 93
#define NOTE_G2  98
#define NOTE_GS2 104
#define NOTE_A2  110
#define NOTE_AS2 117
#define NOTE_B2  123
#define NOTE_C3  131
#define NOTE_CS3 139
#define NOTE_D3  147
#define NOTE_DS3 156
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_FS3 185
#define NOTE_G3  196
#define NOTE_GS3 208
#define NOTE_A3  220
#define NOTE_AS3 233
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_CS4 277
#define NOTE_D4  294
#define NOTE_DS4 311
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_FS4 370
#define NOTE_G4  392
#define NOTE_GS4 415
#define NOTE_A4  440
#define NOTE_AS4 466
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_CS5 554
#define NOTE_D5  587
#define NOTE_DS5 622
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_FS5 740
#define NOTE_G5  784
#define NOTE_GS5 831
#define NOTE_A5  880
#define NOTE_AS5 932
#define NOTE_B5  988
#define NOTE_C6  1047
#define NOTE_CS6 1109
#define NOTE_D6  1175
#define NOTE_DS6 1245
#define NOTE_E6  1319
#define NOTE_F6  1397
#define NOTE_FS6 1480
#define NOTE_G6  1568
#define NOTE_GS6 1661
#define NOTE_A6  1760
#define NOTE_AS6 1865
#define NOTE_B6  1976
#define NOTE_C7  2093
#define NOTE_CS7 2217
#define NOTE_D7  2349
#define NOTE_DS7 2489
#define NOTE_E7  2637
#define NOTE_F7  2794
#define NOTE_FS7 2960
#define NOTE_G7  3136
#define NOTE_GS7 3322
#define NOTE_A7  3520
#define NOTE_AS7 3729
#define NOTE_B7  3951
#define NOTE_C8  4186
#define NOTE_CS8 4435
#define NOTE_D8  4699
#define NOTE_DS8 4978

int Pirates_note[] = {
NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, 
NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,  
NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, 
NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4,
0, NOTE_A3, NOTE_C4, NOTE_B3, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_F4,
NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4,
NOTE_D4, 0, 0, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_F4,
NOTE_G4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4,
NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_E3, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_A4, 
NOTE_D4, 0, NOTE_D4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_D4
};
int Pirates_duration[] = {
4,8,4,8,4,8,8,8,8,4,8,4,8,4,8,8,8,8,4,8,4,8,
4,8,8,8,8,4,4,8,8,4,4,8,8,4,4,8,8,
8,4,8,8,8,4,4,8,8,4,4,8,8,4,4,8,4,
4,8,8,8,8,4,4,8,8,4,4,8,8,4,4,8,8,
8,4,8,8,8,4,4,4,8,4,8,8,8,4,4,8,8
};
//###########End of He is a Pirate song#############//
//##############**"Crazy Frog" song of Crazy frog album**##############//
int CrazyFrog_note[] = {
 NOTE_D4, 0, NOTE_F4, NOTE_D4, 0, NOTE_D4, NOTE_G4, NOTE_D4, NOTE_C4,
 NOTE_D4, 0, NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4,
 NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4, 0, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4,
 0,NOTE_D4,NOTE_D4
};
int CrazyFrog_duration[] = {
 8, 8, 6, 16, 16, 16, 8, 8, 8, 
 8, 8, 6, 16, 16, 16, 8, 8, 8,
 8, 8, 8, 16, 16, 16, 16, 8, 8, 2,
 8,4,4
};
//###########End of Crazy Frog#############//
//##############**"Mario underworld" **##############//
int MarioUW_note[] = {
 NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,NOTE_AS3, NOTE_AS4, 0, 0,
 NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_AS3, NOTE_AS4, 0,0,
 NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,NOTE_DS3, NOTE_DS4, 0, 0,
 NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,NOTE_DS3, NOTE_DS4, 0,
 0, NOTE_DS4, NOTE_CS4, NOTE_D4,
 NOTE_CS4, NOTE_DS4, NOTE_DS4, NOTE_GS3, NOTE_G3, NOTE_CS4,
 NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
 NOTE_GS4, NOTE_DS4, NOTE_B3,  NOTE_AS3, NOTE_A3, NOTE_GS3,0, 0, 0
};
int MarioUW_duration[] = {
12, 12, 12, 12,12, 12, 6,3,
12, 12, 12, 12, 12, 12, 6, 3,
12, 12, 12, 12, 12, 12, 6,
3, 12, 12, 12, 12,
12, 12, 6, 6, 18, 18, 18,
6, 6, 6, 6,6, 6,
18, 18, 18, 18, 18, 18, 10, 10, 10,
10, 10, 10, 3, 3, 3
};
//###########End of Mario underworld#############//
//##############**"Titanic" **##############//
int Titanic_note[] = {
NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,
NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_F5,
NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,
NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_E4,
NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4
};
int Titanic_duration[] = {
8,8,8,8,8,8,4,8,8,8,8,8,8,4,8,8,8,8,8,8,4,8,8,8,8,4,4,8,8,8,8,8,8,4,8,8,8,8,8,8,4,8,8,8,8,8,8,1,
8,8,8,8,4,4,4,8,4,4,8,8,8,8,4,8,8,4,8,4,8,8,4,8,4,1
};
//###########End of Titanic#############//
//despecito 
int desp_note[] = {
 NOTE_D5, NOTE_CS5, NOTE_B4, NOTE_FS4,
 NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_G4,
 NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_A4,
 NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_CS4,
 0,  
 NOTE_D5, NOTE_CS5, NOTE_B4, NOTE_FS4,
 NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_A4, NOTE_B4, NOTE_G4,
 NOTE_G4, NOTE_G4, NOTE_G4, NOTE_G4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_B4, NOTE_CS5, NOTE_D5, NOTE_A4,
 NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_E4, NOTE_CS4, 
};
int desp_duration[] = {
 2, 2, 4, 4,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 2,
 8,
 2, 2, 4, 4,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4,
 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 2,
};
int new_note[]={NOTE_C6, NOTE_D6,NOTE_E6, NOTE_F6, NOTE_G6,0, NOTE_E6, NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
NOTE_F6,0, NOTE_D6, NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
NOTE_G5,0,NOTE_C6,0,NOTE_F6,0,NOTE_E6,NOTE_G6,NOTE_C6,0,
NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_D6,0,
NOTE_C6,NOTE_D6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_E6,NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
NOTE_F6,0,NOTE_D6,NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
NOTE_A5,0,NOTE_A6,0,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_C6,NOTE_C6,0,
NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_A6,NOTE_G6,0,
NOTE_G5,NOTE_G5,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_C6,0,0,};
int new_note1[]={ NOTE_C6,NOTE_B5,NOTE_C6,NOTE_G5,0,
NOTE_C6,NOTE_B5,NOTE_C6,NOTE_E6,0,
NOTE_F6,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_F6,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_C6,NOTE_D6,NOTE_D6,0,
NOTE_C6,NOTE_B5,NOTE_C6,NOTE_G5,0,
NOTE_C6,NOTE_B5,NOTE_C6,NOTE_G6,0,
NOTE_F6,NOTE_F6,NOTE_F6,NOTE_F6,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_F6,0,
NOTE_C6,NOTE_D6,NOTE_F6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_E6,0,
NOTE_A5,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_A5,NOTE_A5,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_C6,NOTE_G6,0,
};
int new_note2[]={NOTE_C6,NOTE_D6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_E6,NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
NOTE_F6,0,NOTE_D6,NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
NOTE_G5,0,NOTE_C6,0,NOTE_F6,0,NOTE_E6,NOTE_G6,NOTE_C6,0,
NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_D6,0,
NOTE_C6,NOTE_D6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_E6,NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
NOTE_F6,0,NOTE_D6,NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
NOTE_A5,0,NOTE_A6,0,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_C6,NOTE_C6,0,
NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_A6,NOTE_G6,0,
NOTE_G5,NOTE_G5,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_C6,0,0};
int new_duration[]={8,8,8,8,8,10,8,8,10,8,10,4,8,2,
  8,10,8,8,10,8,10,4,8,2,
  8,10,8,10,8,10,4,8,4,6,
  8,8,8,8,8,8,8,8,4,4,
  8,8,8,8,8,10,8,8,10,8,10,4,8,2,
  8,10,8,8,10,8,10,4,8,2,
  8,10,8,10,8,8,8,8,4,10,8,8,4,
  8,8,8,8,8,8,8,8,2,4,
  8,8,8,8,8,8,6,1,4,
};
  int new_duration1[]={4,4,6,2,5,
  4,4,6,2,5,
  4,4,4,8,4,8,4,4,4,2,8,2,1,
  4,4,6,2,5,
  4,4,6,2,5,
  8,8,8,8,8,8,8,4,4,
  8,8,8,4,4,8,8,8,2,4,
  4,4,4,8,4,8,4,8,8,8,1,4,
};
 int new_duration2[]={ 8,8,8,8,8,10,8,8,10,8,10,4,8,2,
  8,10,8,8,10,8,10,4,8,2,
  8,10,8,10,8,10,4,8,4,6,
  8,8,8,8,8,8,8,8,4,4,
  8,8,8,8,8,10,8,8,10,8,10,4,8,2,
  8,10,8,8,10,8,10,4,8,2,
  8,10,8,10,8,8,8,8,4,10,8,8,4,
  8,8,8,8,8,8,8,8,2,4,
  8,8,8,8,8,8,6,1,4};
void poc()

{ 
  for (int thisNote = 0; thisNote < (sizeof(Pirates_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / Pirates_duration[thisNote];//convert duration to time delay
   if(thisNote%3==0){
    
   
    tone(3, Pirates_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, Pirates_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, Pirates_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, Pirates_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.05; //Here 1.05 is tempo, increase to play it slower
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}
void loop()
{ 
  for (int thisNote = 0; thisNote < (sizeof(desp_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / desp_duration[thisNote];//convert duration to time delay
   if(thisNote%3==0){
    
   
    tone(3, desp_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, desp_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, desp_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, desp_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.50; //Here 1.05 is tempo, increase to play it slower
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}

void cf()
{
  for (int thisNote = 0; thisNote < (sizeof(CrazyFrog_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / CrazyFrog_duration[thisNote]; //convert duration to time delay
 if(thisNote%3==0){
    
   
    tone(3, CrazyFrog_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, CrazyFrog_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, CrazyFrog_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, CrazyFrog_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.30;//Here 1.30 is tempo, decrease to play it faster
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}

void mario()
{
    for (int thisNote = 0; thisNote < (sizeof(MarioUW_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / MarioUW_duration[thisNote];//convert duration to time delay
     if(thisNote%3==0){
    
   
    tone(3, MarioUW_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, MarioUW_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, MarioUW_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, MarioUW_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 1.80;
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}

void ttn()
{
    for (int thisNote = 0; thisNote < (sizeof(Titanic_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / Titanic_duration[thisNote];//convert duration to time delay
     if(thisNote%3==0){
    
   
    tone(3, Titanic_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, Titanic_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, Titanic_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, Titanic_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 2.70;
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}
void newn()
{
    for (int thisNote = 0; thisNote < (sizeof(new_note)/sizeof(int)); thisNote++) {

    int noteDuration = 1000 / new_duration[thisNote];//convert duration to time delay
     if(thisNote%3==0){
    
   
    tone(3, new_note[thisNote], noteDuration);
   }
     if(thisNote%4==0){
    
   
    tone(4, new_note[thisNote], noteDuration);
   }   if(thisNote%5==0){
    
   
    tone(5, new_note[thisNote], noteDuration);
   }   else{
    
   
    tone(6, new_note[thisNote], noteDuration);
   } 
    int pauseBetweenNotes = noteDuration * 2.70;
    delay(pauseBetweenNotes);
    noTone(8); //stop music on pin 8 
    }
}
void setup() {
 //Button 4 with internal pull up
Serial.begin(9600);
}
