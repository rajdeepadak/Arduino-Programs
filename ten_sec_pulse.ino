const int clk_pin = 13;

void setup() 
{
  pinMode(clk_pin, OUTPUT);
}

void loop() 
{
  digitalWrite(clk_pin, LOW);
  delay(10000);
  digitalWrite(clk_pin, HIGH);
  delay(10000);
}
