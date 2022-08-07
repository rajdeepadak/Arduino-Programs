
#include <LiquidCrystal.h>

const int potpin = A2;
int val = 0;
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() 
{
   Serial.begin(9600);
   lcd.begin(16, 2);
   lcd.print("Resistance = ");
}

void loop() 
{
  val = analogRead(potpin);
  Serial.println(val);
  lcd.setCursor(0, 1);
  lcd.print(val*14.7964);
  lcd.print(" ohms");
  delay(200);
}

