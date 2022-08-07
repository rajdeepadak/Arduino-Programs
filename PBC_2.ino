/*The following code allows the user better control with the Push button. On pressing the button once the LED keeps glowing. Hence a push button is made to act like a turn over switch. The  
  Arduino remembers the state of the push button when it was pressed and is coded accordingly to keep the LED glowing until the button is pressed again.*/
/*This code is not perfect. Since the Push button is not an ideal device. Due to mechanical errors the button bounces from it's contacts. Even though it may seem that the button was pressed
  it may not actually close the circuit.*/
 

const int LED = 13;
const int BUTTON = 7;
int val = 0;
int state = 0;

void setup() 
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() 
{
  val = digitalRead(BUTTON);

  if(val == HIGH)
     {
      state = 1-state;              // On 1st press the initial value of state = 0 and val = HIGH. Hence state = 1 - state = 1. On 2nd press again val = HIGH, state is now = 1. Hence 
     }                              // current value of state will be = 1 - state = 1 - 1 = 0. Therfore for state = 0 LED is LOW/ not glowing.
      
  if(state == 1)
     {
      digitalWrite(LED, HIGH);      // LED keeps glowing in every loop when state = 1;
     }
  
  else
     {
      digitalWrite(LED, LOW); 
     }
}








