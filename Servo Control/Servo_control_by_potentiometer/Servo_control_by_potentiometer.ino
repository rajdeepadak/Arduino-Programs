#include <Servo.h>

int val = 0;
int potpin = 2;
Servo servomotor;

void setup()
{
   servomotor.attach(3);
   Serial.begin(9600);
}

void loop()
{
   val = analogRead(potpin);
   Serial.println(val);
   
   if( val >0 && val <=180 )
     {
       servomotor.write(val);
     }
   
   else
     {
       servomotor.write(0);
     }
}

