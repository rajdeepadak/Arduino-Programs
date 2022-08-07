const int LED = 11;
int potpin = 2;
int val = 0;
int brightness = 0;

void setup()
{
   pinMode(LED, OUTPUT);
   Serial.begin(9600);
}

void loop()
{
   val = analogRead(potpin);
   Serial.println(val);

   brightness = map(val, 0, 1023, 0, 255);
   analogWrite(LED, brightness);  
}

