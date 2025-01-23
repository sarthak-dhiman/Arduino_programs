void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
 pinMode(8,OUTPUT);
 
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(5000);
 analogWrite(8,HIGH);
  delay(3000);
  analogWrite(8,LOW);
}
 void loop(){
  digitalWrite(13,HIGH);
 
  digitalWrite(12,HIGH);
  delay(5000);
 analogWrite(8,HIGH);
 
 }
