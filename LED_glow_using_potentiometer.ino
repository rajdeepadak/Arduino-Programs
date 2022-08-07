int potpin = 2;
int LED = 13;
int val = 0;

void setup()
{
   pinMode(LED, OUTPUT);
}

void loop()
{
   val = analogRead(potpin);

   if(val > 615)
     {
       digitalWrite(LED, HIGH);
     }

   else
     {
       digitalWrite(LED, LOW);
     }
}

