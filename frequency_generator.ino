int clk_1 = 13;     /*20 Seconds of Time period, frequency = 0.05 Hz*/
int clk_2 = 12;     /*10 Seconds of Time period, frequency = 0.1 Hz*/
int clk_3 = 8;      /*5 Seconds of Time period, frequency = 0.2Hz*/
int clk_4 = 7;      /*2 Seconds of Time period, frequency = 0.5Hz*/
int clk_5 = 4;      /*1 Second of Time period, frequency = 1Hz*/
int clk_6 = 11;     /*0.1 Second of Time period, frequency = 10Hz*/
int clk_7 = 10;     /*0.033 Second of Time period, frequency = 30Hz*/
int clk_8 = 9;      /*0.01 Second of time period, frequency = 100Hz*/ 

void setup() 
{
  pinMode(clk_1, OUTPUT);
  pinMode(clk_2, OUTPUT);
  pinMode(clk_3, OUTPUT);
  pinMode(clk_4, OUTPUT);
  pinMode(clk_5, OUTPUT);
  pinMode(clk_6, OUTPUT);
  pinMode(clk_7, OUTPUT);
  pinMode(clk_8, OUTPUT);
}

void loop() 
{
  digitalWrite(clk_1, HIGH);
  delay(10000);
  digitalWrite(clk_1, LOW);
  delay(10000);

  digitalWrite(clk_2, HIGH);
  delay(5000);
  digitalWrite(clk_2, LOW);
  delay(5000);

  digitalWrite(clk_3, HIGH);
  delay(2500);
  digitalWrite(clk_3, LOW);
  delay(2500);

  digitalWrite(clk_4, HIGH);
  delay(1000);
  digitalWrite(clk_4, LOW);
  delay(1000);

  digitalWrite(clk_5, HIGH);
  delay(500);
  digitalWrite(clk_5, LOW);
  delay(500);

  digitalWrite(clk_6, HIGH);
  delay(50);
  digitalWrite(clk_6, LOW);
  delay(50);

  digitalWrite(clk_7, HIGH);
  delay(16);
  digitalWrite(clk_7, LOW);
  delay(16);

  digitalWrite(clk_8, HIGH);
  delay(5);
  digitalWrite(clk_8, LOW);
  delay(5);
}
