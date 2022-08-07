/*The purpose of the Push Buttonn is to act as a switch. When pressed the switch is closed. So in a simple LED glowing circuit if the Push button is put in series with the LED then on 
  pressing it the LED glows. Therefore the Arduino doesnt need to know whether the button is pressed or not.*/

const int LED1 = 13;

void setup() 
{
  pinMode(LED1,OUTPUT);
}

void loop() 
{
  digitalWrite(LED1,HIGH);
}
