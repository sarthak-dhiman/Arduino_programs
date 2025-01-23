#include "Mouse.h"
void setup() {
  Mouse.begin();
  // put your setup code here, to run once:

}

void loop() {

  
  for(int y=1;y<=100;y++)
  { for(int x=1;x<=100;x++)
  {delay(1000);
   Mouse.move(x,y);}}
  

}
