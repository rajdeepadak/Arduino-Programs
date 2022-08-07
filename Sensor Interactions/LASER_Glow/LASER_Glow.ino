/* Use a photoresistor to measure rpm*/

//Constants
const int pResistor = A0; // Photoresistor at Arduino analog pin A0

//Variables
int value;          // Store value from photoresistor (0-1023)

void setup()
{
 Serial.begin(9600);
 pinMode(pResistor, INPUT);// Set pResistor - A0 pin as an input (optional)
}

void loop()
{
  value = analogRead(pResistor);
  Serial.println(value);
  delay(200);
}
