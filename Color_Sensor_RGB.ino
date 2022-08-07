int redPin= 11;
int greenPin = 10;
int bluePin = 9;

int S0 = 2;
int S1 = 4;
int S2 = 7;
int S3 = 12;

int sensorOut = 8;
int frequencyR = 0;
int frequencyG = 0;
int frequencyB = 0;
int frequency = 0;

int redVal = 0;
int greenVal = 0;
int blueVal = 0;

void setup() 
{
  // Setting all pins to Output.
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Setting frequency-scaling to 20%.
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);

  //Setting RGB pins
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() 
{
  // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  
  // Reading the output frequency
  frequencyR = pulseIn(sensorOut, LOW);
  redVal = map(frequencyR, 0, 700, 0, 255);
  
  // Printing the value on the serial monitor
  Serial.print("R= ");//printing name
  Serial.print(frequencyR);//printing RED color frequency
  Serial.print("  ");
  delay(100);
  
  
  
  // Setting Green filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  
  // Reading the output frequency
  frequencyG = pulseIn(sensorOut, LOW);
  greenVal = map(frequencyG, 0, 700, 0, 255);
  
  // Printing the value on the serial monitor
  Serial.print("G= ");//printing name
  Serial.print(frequencyG);//printing RED color frequency
  Serial.print("  ");
  delay(100);
 
  
  
  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  
  // Reading the output frequency
  frequencyB = pulseIn(sensorOut, LOW);
  blueVal = map(frequencyB, 0, 700, 0, 255);
  
  // Printing the value on the serial monitor
  Serial.print("B= ");//printing name
  Serial.print(frequencyB);//printing RED color frequency
  Serial.println("  ");
  delay(100);

  analogWrite(redPin, redVal);
  analogWrite(greenPin, greenVal);
  analogWrite(bluePin, blueVal);
 
}
