int incomingByte = 0;
int LED = 13;

void setup()
{
   Serial.begin(9600);
   pinMode(LED, OUTPUT);
}

void loop()
{
   if(Serial.available()>2)
     {
       incomingByte = Serial.read();
       Serial.println(incomingByte);
       digitalWrite(LED, HIGH);
       delay(1000);
     }

   else
     {
       digitalWrite(LED, LOW);
     }
}

