int resistance = 0;

void setup()
{
   Serial.begin(9600);
}

void loop()
{
   resistance = analogRead(A2);
   Serial.println(resistance);
}

