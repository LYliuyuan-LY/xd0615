void setup()
{
  int i;
  for(i=0;i<8;i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop()
{
  int i;
  for(i=0;i<8;i++)
  {
    
     digitalWrite(i, HIGH);
 	 delay(200); // Wait for 1000 millisecond(s)
 	 digitalWrite(i, LOW);
 	 delay(200); // Wait for 1000 millisecond(s)
  }
 	
}