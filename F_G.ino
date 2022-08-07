int clk_1 = 13;     /*20 Seconds of Time period, frequency = 0.05 Hz*/
int clk_2 = 12;     /*10 Seconds of Time period, frequency = 0.1 Hz*/

void setup() 
{
  pinMode(clk_1, OUTPUT);
  pinMode(clk_2, OUTPUT);
}

void loop() 
{
  clock_one();
  clock_two();
}

void clock_one()
{
  digitalWrite(clk_1, HIGH);
  delay(10000);
  digitalWrite(clk_1, LOW);
  delay(10000);
}

void clock_two()
{
  digitalWrite(clk_2, HIGH);
  delay(5000);
  digitalWrite(clk_2, LOW);
  delay(5000);
}

