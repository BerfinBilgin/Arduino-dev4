const int DC=3;
const int pot=A0;
int KirmiziLed=2;
int motor;
int motor2;
void setup()
{
  Serial.begin(9600);
 pinMode(KirmiziLed,OUTPUT);
 pinMode(DC,OUTPUT);
}

void loop()
{
  motor=analogRead(pot);
  motor2=map(motor,0,1023,0,255);
  analogWrite(DC,motor2);
  
  if(motor>200){
  digitalWrite(KirmiziLed,HIGH);
   delay(500);
  }
  
  else{
  digitalWrite(KirmiziLed,LOW);
  delay(500);
  }
  
}
