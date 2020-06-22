
void setup()
{
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(2,OUTPUT);
  
  void function();
  attachInterrupt(digitalPinToInterrupt(2), function,CHANGE);
  //attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 
  volatile int i = 0;

void loop()
{
 
  
 // attachInterrupt(digitalPinToInterrupt(2), function,CHANGE);
  delay(1000);
  
  if(i=0)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  delay(1000);
  
  if(i=1)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=2)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=3)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=4)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=5)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=6)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=7)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
  }
  delay(1000);
  if(i=8)
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  delay(1000);
  if(i=9)
  {
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
  }
  delay(1000);
  i = i + 1;
  
  if(i>9)
  {
    i = i-10;
  }
  
 
  
}

 void function()
  {
    
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    i = 0;
  }