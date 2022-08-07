/*The bouncing of a Push button can be reduced. There are many reasons for this. The logic used in this code is considering a particular case where we are sure that the LED has to glow.
  The LED has to glow when val is HIGH and the previous value of of val is LOW. In any other case the LED must not glow.*/


const int LED = 13;
const int BUTTON = 7;

int val = 0;
int old_val = 0;
int state = 0;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(BUTTON, INPUT);
}

void loop()
{
    val = digitalRead(BUTTON);              // When the button is pressed the value of val = HIGH and old_val = LOW. 

    if( val == HIGH && old_val == LOW)      // The LED glows only if current value of val is HIGH and the previous value of val is LOW.
      {
         state = 1-state;                   // state is the variable used to remember the condition when the LED will glow. 
      }

    old_val = val ;                       
    if(state == 1)                          
      {
        digitalWrite(LED, HIGH);            // Since state = 1 LED will glow.
      }

    else
      {
        digitalWrite(LED, LOW);             // If state = 0 LED won't glow.
      }
}



/* 1st press 1st loop. val = HIGH, old_val = LOW, state = 1, old_val is reset to value of val in the current loop. old_val = HIGH ; LED glows. 
 * 2nd loop (Button is not pressed) val = LOW, old_val = HIGH, state = 1, old_val is reset to value of val in current loop. old_val = LOW ; LED glows.
 * 2nd press 3rd loop. val = HIGH, old_val = LOW, state = 1 - previous value of state = state = 0, old_val is reset to current value of val in loop. old_val = HIGH ; LED doesn't glow.
 * 4th loop (Button is not pressed) val = LOW, old_val = HIGH, state = 0. old_val is reset to value of val in current loop. old_val = LOW ; LED doesn't glow.*/

