#include <Servo.h>

Servo towerpro;

void setup()
{
   towerpro.attach(3);
}

void loop()
{
   towerpro.write(101);
   delay(500000);
}

