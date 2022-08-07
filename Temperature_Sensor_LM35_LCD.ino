#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
const int LM35 = A0;
float temp = 0;
int inputval = 0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() \
{
  inputval = analogRead(LM35);
  temp = (5.0*inputval*100.0)/1024;
  lcd.setCursor(0, 1);
  lcd.print(temp);
}

