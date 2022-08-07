/*The LEDs glow alternately every 1 second*/

const int LED1 = 13;
const int LED2 = 12;

void setup() 
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop() 
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,LOW);
  delay(1000);

  digitalWrite(LED2,HIGH);
  digitalWrite(LED1,LOW);
  delay(1000);
}
