//On pressing the Push Button the LED completes one cycle of slowly glowing and slowly dimming//


const int LED = 9;
int i;
int BUTTON = 7;
int a = 0;
int b = 0;

void setup()
{
   pinMode(LED, OUTPUT);
   pinMode(BUTTON, INPUT);
}

void loop()
{
   a = digitalRead(BUTTON);

   if(a == HIGH)
     {
        for( i=0 ; i<255 ; i++)
           {
             analogWrite(LED, i);
             delay(3);
           }

        for(i=255 ; i>0 ; i--)
           {
             analogWrite(LED, i);
             delay(3);
           }
     }

   else
   {
     digitalWrite(LED, LOW);
   }
}

