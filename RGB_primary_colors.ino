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
  setColor(0, 255, 255); // Red Color
  delay(1000);
  setColor(255, 0, 255); // Green Color
  delay(1000);
  setColor(255, 255, 0); // Blue Color
  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
