/*If the Push button is pressed and held in that state then the LED increases it's brightness from 5 to a maximum of 255. If the push button is released during the increase of brightness
  then the LED remains at the brightess level it was just before the push buttton was released. If the button is pressed again then the LED is turned off. To light up the LED again and 
  change the brightness the same procedure has to be followed.*/

const int LED = 9;
const int  BUTTON = 7;

int val = 0;
int old_val = 0;
int state = 0;
int brightness = 1;
unsigned long startTime = 0;

void setup()
{
   pinMode(LED, OUTPUT);
   pinMode(BUTTON, INPUT);
}

void loop()
{
   val = digitalRead(BUTTON);

   if((val == HIGH) && (old_val == LOW))
     {
       state = 1-state;
       startTime = millis();
       delay(10);
     }

   if((val == HIGH) && (old_val == HIGH))
     {
       if(state == 1 && (millis() - startTime) > 500)
          {
             brightness++;
             delay(170);

             if(brightness > 55) 
                {
                  brightness = 0;
                }
          }
     }      
                
   old_val = val;

   if(state == 1)
     { 
        analogWrite(LED, brightness);
     }

   else
     {
        analogWrite(LED, 0);
     }
}
