

int led=13;
int led2=12;
int led3=8;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
} 

void loop() {
  digitalWrite(led, HIGH);                     
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);    
  delay(5000);                      
  digitalWrite(led,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  delay(5000);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  delay(10000);
}
