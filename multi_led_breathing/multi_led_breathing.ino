int led=13;
int led2=12;
int led3=8;
int led4=7;
int led5=4;
int led6=2;

void setup(){
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
}

void loop(){
  digitalWrite(led,HIGH);
  delay(5000);
  digitalWrite(led2,HIGH);
  delay(5000);
  digitalWrite(led3,HIGH);
  delay(5000);
  digitalWrite(led4,HIGH);
  delay(5000);
  digitalWrite(led5,HIGH);
  delay(5000);
  digitalWrite(led6,HIGH);
  delay(5000);
  digitalWrite(led,LOW);
  delay(5000);
  digitalWrite(led2,LOW);
  delay(5000);
  digitalWrite(led3,LOW);
  delay(5000);
  digitalWrite(led4,LOW);
  delay(5000);
  digitalWrite(led5,LOW);
  delay(5000);
  digitalWrite(led6,LOW);
  delay(1000);
  digitalWrite(led,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  delay(1000);
  digitalWrite(led,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  delay(1000);
  }
  
  
  
