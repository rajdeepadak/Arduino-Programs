#include <Servo.h>

Servo esc;
int var,var1;
void setup()
{
  
  esc.attach(10);
  esc.writeMicroseconds(1100);
  Serial.begin(9600);
}

void loop()
{
var=analogRead(A0);
//if(var>512)
 //var=512;
var1=map(var,0,1023,1000,2000);
esc.writeMicroseconds(var1);
Serial.println(var1);  
}

