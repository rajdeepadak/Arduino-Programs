#include <Servo.h>

Servo myservo;

const int trigPin = 9;     // Initialise Ultrasound Sensor
const int echoPin = 11;
long duration = 0;
int distance = 0;

void setup()
{
  myservo.attach(3);        // Attach Servo to PWM pin
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop()
{

  myservo.write(101);

    
  digitalWrite(trigPin, LOW);           // Configure Ultrasound Distance measurement.
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
 
  Serial.print("Distance: ");
  Serial.println(distance);


 if(distance<10)
         {
           myservo.write(121);
           delay(50);
         }

 if(distance>10)
         {
           myservo.write(81);
           delay(50);
          }
  if(distance == 10)
    {
      myservo.write(101);
    }
}     
  

         

