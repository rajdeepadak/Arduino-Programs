const int LED = 9;
int i;
int j;

void setup()
{
   pinMode(LED, OUTPUT);
}

void loop()
{
   for( i=0 ; i<100 ; i++)
      {
         analogWrite(LED, i);
         delay(40);
      }

   for( j=100 ; j<255 ; j++)
      {
         analogWrite(LED, j);
         delay(2);
      }

   for( j=255 ; j>100 ; j--)
      {
         analogWrite(LED, j);
         delay(2);
      }

   for( i=100 ; i>0 ; i--)
      {
         analogWrite(LED, i);
         delay(40);
      }
}

