// Motor control using relay

const int MOTOR = 2;

void setup() 
{
  pinMode(MOTOR,OUTPUT);
}

void loop() 
{
  digitalWrite(MOTOR,HIGH);
  delay(5000);
  digitalWrite(MOTOR,LOW);
  delay(5000);
}
