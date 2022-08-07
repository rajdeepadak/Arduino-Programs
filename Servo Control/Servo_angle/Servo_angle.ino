#include <Servo.h>

int PBC = 13;
Servo myservo;
int state = 0;
int val = 0;
int i;

void setup()
{
   Serial.begin(9600);
   pinMode(PBC, OUTPUT);
   myservo.attach(3);
}

void loop()
{
   val = digitalRead(PBC);

   if(val == HIGH)
     {
       state = 1-state;
     }

   if(state == 1)
     {
       for( i=0 ; i<=180 ; i+=1)
          {
             myservo.write(i);
             delay(10);
             Serial.println(i);
             delay(100);
          }
     }

   if(state == 0)
     {
       myservo.write(0);
     }
}

