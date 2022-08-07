/* A Joystick is nothing but a potentiometer which is used to control a servo. It has two potentiometers each responsible to control resistance along X and Y direction. The only problems one
 * can encounter is if the potentiometers are damaged or if the joystick control is not moving properly. */

#include <Servo.h>

int X = A1;
int Y = A2;
int valX = 0;
int valY = 0;
Servo myservo;
int servoangle;

void setup()
{
   Serial.begin(9600);
   myservo.attach(3);
}

void loop()
{
   valX = analogRead(X);
   valY = analogRead(Y);
   valX = valX - 524;
   valY = valY - 507;
   Serial.print("x = ");
   Serial.print(valX);
   Serial.print("  y = ");
   Serial.print(valY);
   Serial.println(" ");
   delay(100);
   
  
   servoangle = map(valX, 0, 1023, 0, 180);
   myservo.write(servoangle);
}

