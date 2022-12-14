const int trigPin = 9;
const int echoPin = 10;
long duration = 0;
int distance = 0;

void setup()        
{                                                                          
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); // Starts the serial communication
}

void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
  distance= duration*0.034/2;

  Serial.print("duration : ");
  Serial.print(duration);
  Serial.print(", Distance: ");
  Serial.println(distance);
}
