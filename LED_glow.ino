/*Since delay function is not written in the code the LED simply keeps glowng*/

const int LED =13;

void setup()
{
   pinMode(LED, OUTPUT);
}

void loop()
{
   digitalWrite(LED, HIGH);
}

