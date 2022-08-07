int redPin= 11;
int greenPin = 10;
int bluePin = 9;

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() 
{
  setColor(105, 105, 255); // olive green color
}

void setColor(int redValue, int greenValue, int blueValue) 
{
  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
