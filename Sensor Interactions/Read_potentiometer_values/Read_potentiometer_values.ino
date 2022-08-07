int Potpin = 0;

void setup()
{
   pinMode(Potpin, INPUT);
   Serial.begin(9600);
}

void loop()
{
  Serial.println(analogRead(Potpin));
}

