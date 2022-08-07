
const int LED = 13;
int i;

void setup() 
{
  pinMode(LED, OUTPUT);
}

void loop() 
{
  for(i=1 ; i<=5 ; i++)
     {
       digitalWrite(LED, HIGH);
       delay(500);
       digitalWrite(LED, LOW);
       delay(500);
     }

  exit(1);                    // exit function stops the arduino from executing the loop.
}
