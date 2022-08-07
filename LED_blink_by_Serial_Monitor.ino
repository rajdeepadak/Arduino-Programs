const int LED = 13;
int blinkRate;
int blinkSpeed;

void setup()
{
   Serial.begin(9600);
   pinMode(LED, OUTPUT);
}

void loop()
{
   if(Serial.available())
     {
       char ch = Serial.read();
       if(ch>='0' && ch<='9')
         {
           blinkRate = (ch-'0');
           blinkSpeed = blinkRate*1000;
         }
       blink();
     }
  
}


void blink()
{
   digitalWrite(LED, HIGH);
   delay(blinkSpeed);
}

