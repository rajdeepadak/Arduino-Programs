const int trigPin = 9;
const int echoPin = 10;
long duration;
float distance = 0.0;
const int LM35 = A0;
float temp = 0.0;
float inputval = 0.0;
float c = 0;

void setup()        
{                                                                          
  pinMode(trigPin, OUTPUT);                  // Sets the trigPin as an Output
  pinMode(echoPin, INPUT);                   // Sets the echoPin as an Input
  Serial.begin(9600);                        // Starts the serial communication
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);               // Sends Ultrasound pulses.
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);         // Calculates time required to travel distance between obstacle and Ultrasound Sensor

  inputval = analogRead(LM35);               // Reads analog value of LM35 inputs and converts to degree celcius.
  temp = ((5.0*inputval*100.0)/(1024.0));

  c = (331.3)*(sqrt(1+(temp/(273.15))));     // Calibrates speed of sound to it's real accurate value in the environment
  distance = duration*(c/2);   

  Serial.print("Temperature : ");            // Prints values of room temperature, Speed of sound and distance
  Serial.print(temp);
  Serial.print(", Speed of Sound : ");
  Serial.print(c);
  Serial.print(", duration : ");
  Serial.print(duration);
  Serial.print(", Distance : ");
  Serial.print(distance/10000, 4);
  Serial.println("");
}
