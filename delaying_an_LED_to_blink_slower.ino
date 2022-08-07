/*The rate of blinking of LED is lowered with time*/

const int LED = 13;
int i = 10;

void setup() 
  {
    pinMode(LED, OUTPUT);
  }

void loop() 
  {
    digitalWrite(LED, HIGH);
    delay(10);
    digitalWrite(LED, LOW);
    delay(i);
    i = i+10;
  }
