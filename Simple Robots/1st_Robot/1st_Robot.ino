#include <Servo.h>

Servo myservo;             // Declare servo variable.
int motor1 = 6;   
int motor2 = 3;            // Configure DC motor

int motorval1 = 0;
int motorval2 = 0;

int motorspeed1 = 0;
int motorspeed2 = 0;

int MS1 = 0;
int MS2 = 0;
int x = 0;
                         
const int trigPin = 9;     // Initialise Ultrasound Sensor
const int echoPin = 10;
long duration = 0;
int distance = 0;
        
const int BUTTON = 7;    // Initiate Push Button Control
int val = 0;
int state = 0;

int Potpin1 = 0;        // Initiate Potentiometers for Speed Control
int Potpin2 = 1;

void setup()        
{                                                                          
  myservo.attach(3);        // Attach Servo to PWM pin
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
     
  pinMode(BUTTON, INPUT);  // Confirgure LED and PB control
  pinMode(motor1, OUTPUT);  // Configure DC motor pin
  pinMode(motor2, OUTPUT);
}

void loop()
{
  digitalWrite(trigPin, LOW);           // Configure Ultrasound Distance measurement.
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;
 
  Serial.print("Distance: ");
  Serial.println(distance);

  val = digitalRead(BUTTON);
  myservo.write(90);

  motorval1 = analogRead(Potpin1);
  motorval2 = analogRead(Potpin2);

  motorspeed1 = map(motorval1, 0, 1023, 0, 255);
  motorspeed2 = map(motorval2, 0, 1023, 0, 255);

  if(val == HIGH)
     {
      state = 1-state;               
     }                             
      
  if(state == 1)
     {
       if(distance<10)
         {
           myservo.write(70);
           delay(100);

           if((Potpin1 < 320 && Potpin1 > 270) && (Potpin2 < 320 && Potpin2 > 270))
             {
               x = abs(motorspeed1 - motorspeed2);

               if(motorspeed1<motorspeed2)
                 {
                   MS1 = motorspeed1 + x/2;
                   MS2 = motorspeed2 - x/2;                        // Balancing the analog values to give same speed to the motors.
                 }

               if(motorspeed1>motorspeed2)
                 {
                   MS1 = motorspeed1 - x/2;
                   MS2 = motorspeed2 + x/2;
                 }

               analogWrite(motor1, MS1);
               analogWrite(motor2, MS2);
             }
           delay(100);  
           
         }

        if(distance>10)
         {
           myservo.write(110);
           delay(100);

           if((Potpin1 < 320 && Potpin1 > 270) && (Potpin2 < 320 && Potpin2 > 270))
             {
               x = abs(motorspeed1 - motorspeed2);

               if(motorspeed1<motorspeed2)
                 {
                   MS1 = motorspeed1 + x/2;
                   MS2 = motorspeed2 - x/2;                        // Balancing the analog values to give same speed to the motors.
                 }

               if(motorspeed1>motorspeed2)
                 {
                   MS1 = motorspeed1 - x/2;
                   MS2 = motorspeed2 + x/2;
                 }

               analogWrite(motor1, MS1);
               analogWrite(motor2, MS2);
             }
           delay(100);
         }

        if(distance == 10)
          {
             myservo.write(90);
             delay(100);
          }
      }

   if(state == 0)
     {
       myservo.write(90);

       analogWrite(motor1, 0);
       analogWrite(motor2, 0);
     }
  
}
