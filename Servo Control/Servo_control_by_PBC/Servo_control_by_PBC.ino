#include <Servo.h>

int PBC1 = 2 ;
int PBC2 = 4 ;
Servo myservo;
int val1;
int val2;

void setup()
{
   myservo.attach(3);
   pinMode(PBC1, INPUT);
   pinMode(PBC2, INPUT);
}

void loop()
{
   val1 = digitalRead(PBC1);
   val2 = digitalRead(PBC2);

   if(val1 == HIGH && val2 == LOW)
     {
       myservo.write(45);
     }

   if(val2 == HIGH && val1 == LOW)
     {
       myservo.write(180);
     }

   if(val1 == LOW && val2 == LOW)
     {
       myservo.write(0);
     }
}

