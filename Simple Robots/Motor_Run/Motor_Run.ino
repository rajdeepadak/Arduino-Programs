const int motorpin = 11;

void setup()
{
   pinMode(motorpin, OUTPUT);
}

void loop()
{
   analogWrite(motorpin, 100);
}

