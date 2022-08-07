const int IR = A0;
int inputVal = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
   inputVal = analogRead(IR);
   Serial.println(inputVal);
}

