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
  delay(5000);
  setColor(255, 0, 0); // cyan 
  delay(1000);
  setColor(0, 255, 0); // purple
  delay(1000);
  setColor(0, 0, 255); // yellow
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
