/*The serial monitor is a speculating program that displays what the arduino is performing.*/


int i = 2;
int j = 3;
int m = i+j;

void setup()
{
   Serial.begin(9600);                   // Serial.begin is a function that sets the Baud rate. Baud rate is the rate of transfer of bauds(collection of bits) between the computer and the
   Serial.print("HELLO WORLD");          // Arduino board. Usually transfer of bauds is slower than transfer of bits. Bauds require programs like accumilator which gathers sets of bits 
   Serial.print("\n");                   // together to form a baud. Such transfer requires a better equipment.
   Serial.print("i");
   Serial.print("\n");                   // Serial.print() prints the arithmetic value/character that is put within parenthesis.
   Serial.print("j");
   Serial.print("\n");                   // Serial.print("\n") is basically like pressing enter. 
   Serial.print(i);                     
   Serial.print("\n");
   Serial.print(j);
   Serial.print("\n");
   Serial.print("i+j");
   Serial.print("\n");
   Serial.print(i+j);
   Serial.print("\n");
   Serial.print(m);
}

void loop()
{
  Serial.print("1");
  Serial.print("\n");
}
