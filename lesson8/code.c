//这个电路实现了随着电位计爱弟指针改变，串口输出的值也改变，
//也就是串口实时输

int sensorValue = 0;           //定义存储信号的变量

void setup()
{
  pinMode(A0, INPUT);           //将A0引脚打开
  Serial.begin(9600);           //初始化串口。

}

void loop()
{
 
  sensorValue = analogRead(A0);   //在引脚A0读取模拟输入信号
  
  Serial.println(sensorValue);    //在串行监视器中打印读取的数据
  delay(10);                      //延迟10ms。 
}