/*Only 2 LEDs blink at a time.*/

const int LED1 = 13;
const int LED2 = 8;
const int LED3 = 4;

void setup() 
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop() 
{
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,LOW);
  delay(5000);

  digitalWrite(LED2,HIGH);
  digitalWrite(LED1,LOW);
  digitalWrite(LED3,HIGH);
  delay(5000);
  
  digitalWrite(LED3,HIGH);
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,HIGH);
  delay(5000);
}
