#include <Servo.h>
Servo servo;
int i;
int j;

void setup()
{
  servo.attach(3);
}

void loop()
{
  for(i=0 ; i<=180 ; i+=20)
     {
       servo.write(i);
       delay(1000);
     }

  delay(1000);

  for(j=180 ; j>=1 ; j-=20)
     {
       servo.write(j);
       delay(1000);
     }

  delay(1000);
}

