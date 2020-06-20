#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  Serial.begin(9600);
  
 /* digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
 */
}

byte income = 0;

int n;
byte a,b,c,d;

void loop()
{
  if(Serial.available()>0)
  {
    n = Serial.read();
    
    a = n%10;
    b = ((n-a)/10)%10;
    c = (((n-a)/10-b)/10)%10;
    d = (((n-a)/10-b)/10-c)/10;
    

    a = a - '0';
    
    digitalWrite(S1,LOW);
    digitalWrite(IN1,a&0x1);
    digitalWrite(IN2,(a>>1)&0x1);
    digitalWrite(IN3,(a>>2)&0x1);
    digitalWrite(IN4,(a>>3)&0x1);
    
    
    b = b -'0';
    digitalWrite(S2,LOW);
    digitalWrite(IN1,b&0x1);
    digitalWrite(IN2,(b>>1)&0x1);
    digitalWrite(IN3,(b>>2)&0x1);
    digitalWrite(IN4,(b>>3)&0x1);
    
  
    c =c-'0';
    digitalWrite(S3,LOW);
    digitalWrite(IN1,c&0x1);
    digitalWrite(IN2,(c>>1)&0x1);
    digitalWrite(IN3,(c>>2)&0x1);
    digitalWrite(IN4,(c>>3)&0x1);
   
  
    d = d - '0';
    digitalWrite(S4,LOW);
    digitalWrite(IN1,d&0x1);
    digitalWrite(IN2,(d>>1)&0x1);
    digitalWrite(IN3,(d>>2)&0x1);
    digitalWrite(IN4,(d>>3)&0x1);
    
  }
  
}