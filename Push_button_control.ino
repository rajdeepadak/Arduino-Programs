/* The right Push button control code is when an Arduino board reads the state of the button and lights up the LED accordingly. When the button is pressed the pin 7 of the Arduino receives 
   current. This notifies the Arduino that the button is ON/HIGH. Hence a voltage of 5 Volts is applied on the LED via pin 13. This is unlike the PBC_easy code where the arduino doesnt
   know if the button is ON. When th Button is OFF/LOW then the Arduino doesnt apply any voltage on pin13.*/
 

const int LED = 13;
const int BUTTON = 7;
int  value = 0;

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() 
{
  value = digitalRead(BUTTON);
  
  if(value == HIGH)
    {
      digitalWrite(LED, HIGH);
    }
  else
    {
      digitalWrite(LED, LOW);
    }
}
