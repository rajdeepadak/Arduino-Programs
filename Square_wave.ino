const int clk_1 = 13; /*20 Second time period, 0.05 Hz*/
const int clk_2 = 12; /*20 millisecond time period, 50 Hz*/
const int BUTTON = 7;

int val = 0;
int old_val = 0;
int state = 0;

void setup()
{
    pinMode(clk_1, OUTPUT);
    pinMode(clk_2, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop()
{
    val = digitalRead(BUTTON);

    if( val == HIGH && old_val == LOW)
      {
         state = 1-state;
         delay(10);
      }

    old_val = val ;

    if(state == 1)
      {
        clock_one();
      }

    else
      {
        clock_two();  
      }
}

void clock_one()
{
  digitalWrite(clk_1, LOW);
  delay(10000);
  digitalWrite(clk_1, HIGH);
  delay(10000);
}

void clock_two()
{
  digitalWrite(clk_2, LOW);
  delay(25);
  digitalWrite(clk_2, HIGH);
  delay(25);
}


