/* The code instructs the Arduino to blink an LED in a pattern set by the user.*/

const int LED = 13;          /*const is a variable qualifier which is an extra quality of the variable type. Here the variable Name is LED which is attached to pin 13. The variable type
                               is an integer. But the value of integer can be changed as per the needs of the user. But if const is also added the variable becomes a constant value and 
                               canot be changed further in the code. If one tries to assign a new value to the variable LED then the compiler gives an error. 
                               For Eg: in void loop(){ LED = 9 } ; The compiler wont be able to execute the sketch.*/
  


void setup()                 /*void setup() is where the pins of the Arduino board are given specific code to either take input or give output*/
{
  pinMode(LED, OUTPUT);      /*pinMode is a function of the Arduino board which has two parameters. 1) Name of variable that is to be configured. 2)The way the variable is to be configured.*/
}

void loop()                  /*void loop() is where the Arduino board runs it's code. Inside the void loop the user enters what the Arduino is supposed to perform repeatedly.*/
{
  digitalWrite(LED, HIGH);   /*digitalWrite is a function that sets the pin at a voltage of 5V or 3.3V(if the board has 3.3V supply capability) if the 2nd parameter is set at HIGH.*/
  delay(1000);               /*At LOW the voltage is 0V. If the pin is configured as an INPUT digitalWrite() will enable (HIGH) or disable (LOW) the internal pullup on the input pin.*/
  digitalWrite(LED, LOW);                             
  delay(1000);               /*delay() is a single parameter function that pauses the loop and maintains the circuit in the condition it was before delay() was encountered*/
}                            /* for the given period of time within parenthesis in milliseconds.*/          

