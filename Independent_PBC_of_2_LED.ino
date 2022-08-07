const int LED1 = 3;
const int LED2 = 13;
const int BUTTON1 = 2;
const int BUTTON2 = 12;
int  value1 = 0;
int  value2 = 0;

void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(BUTTON1, INPUT);
  pinMode(LED2, OUTPUT);
  pinMode(BUTTON2, INPUT);

}

void loop() 
{
  value1 = digitalRead(BUTTON1);
  value2 = digitalRead(BUTTON2);
  
  if(value1 == HIGH)
    {
      digitalWrite(LED1, HIGH);
    }
  else
    {
      digitalWrite(LED1, LOW);
    }


  if(value2 == HIGH)
    {
       digitalWrite(LED2, HIGH);
    }
  else
    {
       digitalWrite(LED2, LOW);
    }
}






