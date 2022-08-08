#define m1a 2   // Connecting motor 1 to pins 2 and 3. Pins 2 and 3 act as logic pins for motor 1.
#define m1b 3

#define m2a 4   // Connecting motor 2 to pins 4 and 5. Pins 4 and 5 act as logic pins for motor 2.
#define m2b 5

#define m3a 6   // Connecting motor 3 to pins 6 and 7. Pins 6 and 7 act as logic pins for motor 3.
#define m3b 7

float xpin=A1;    // Declaring X & Y input pins from joystick.
float ypin=A2;

float x=0,y=0;    // variables to read analog value of x and y.

float r;
float theta;

float v1, v2, v3, v;

void setdir1()
{
    if(v1<0)
      {
        digitalWrite(m1a,HIGH);
        digitalWrite(m1b,LOW);
  
      }
    else
      {
        digitalWrite(m1a,LOW);
        digitalWrite(m1b,HIGH);
      }
}



void setdir2()
{
     if(v2<0)
       {
        digitalWrite(m2a,HIGH);
        digitalWrite(m2b,LOW);
       }
     else
       {
        digitalWrite(m2a,LOW);
        digitalWrite(m2b,HIGH);
       }
}



void setdir3()
{
     if(v3<0)
       {
        digitalWrite(m3a,HIGH);
        digitalWrite(m3b,LOW);
       }

     else
       {
        digitalWrite(m3a,LOW);
        digitalWrite(m3b,HIGH);
       }
}

void velocity()
{
   v1=v*cos((30-theta)*(3.14285/180));
   setdir1();

   v2=v*cos((150-theta)*(3.14285/180));
   setdir2();

   v3=v*cos((270-theta)*(3.14285/180));
   setdir3();
   
   analogWrite(9,abs(v1));
   analogWrite(10,abs(v2));
   analogWrite(11,abs(v3));
}


void setup() 
{ 
    Serial.begin(9600);            // Serial Communication with Arduino.
    
    pinMode(m1a,OUTPUT);           // Direcction configuration for motors 1, 2 & 3.
    pinMode(m1b,OUTPUT);
    pinMode(m2a,OUTPUT);
    pinMode(m2b,OUTPUT);
    pinMode(m3a,OUTPUT);
    pinMode(m3b,OUTPUT);
    
    pinMode(9,OUTPUT);             // pwm pins 9,10,11
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
}


void loop()
{
    x = analogRead(xpin);
    y = analogRead(ypin);

    x = x - 524;
    y = y - 507;

    r = sqrt(pow(x,2)+pow(y,2));
    v = map(r, 0, 730, 0, 255);
    
    if(x<0 &&y>0)                    // 1st Quadrant
      {
         if(x>-20 && y>=514)
           {
              theta = 0;
           }

         if(x<-490 && y<=5)
           {
              theta = 90;
           }
         
         else  
           {   
              theta = (atan(abs(x)/y))*(180/3.14285);
           }
            
         velocity();
      }

    if(x<0 && y<0)                   // 2nd Quadrant
      {
         
         if(x>-20 && y<=505)
           {
              theta = 180;
           }

         if(x<=-522 && y>=-20)
           {
              theta = 90;             
           }

         else
           {
              theta = (atan(y/x))*(180/3.14285) + 90;
              velocity();
           }
      }

    if(x>0 && y<0)                   // 3rd Quadrant
      {
         if(x>=497 && y<=-20)
           {
             theta = 270;
           }

         if(x<=20 && y<=-505)
           {
             theta = 180;
           }
        
         else
           {
             theta = (atan(abs(y)/x))*(180/3.14285) + 180;
             velocity();
           }     
      }

    if(x>0 && y>0)                   // 4th Quadrant
      {
         if(x<=20 && y<=514)
           {
             theta = 360;
           }

         if(x>=497 &&y<=-505)
           {
             theta = 270;
           }

         else  
           {
             theta = (atan(y/x))*(180/3.14285) + 270;
             velocity();
           }  
      }
      

    Serial.print("x = ");
    Serial.print(x );
    Serial.print("   y = ");
    Serial.print(y );
    Serial.print("   r = ");
    Serial.print(r );
    Serial.print("   theta = ");
    Serial.print(theta );
    Serial.print("   v = ");
    Serial.print(v);
    Serial.print("   v1 = ");
    Serial.print(v1);
    Serial.print("   v2 = ");
    Serial.print(v2);
    Serial.print("   v3 = ");
    Serial.print(v3);
    Serial.println("");

    delay(270);
}










   


