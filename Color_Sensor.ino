int RED = 9;
int GREEN = 10;
int BLUE = 11;
int R, G, B;

int S0 = 4;
int S1 = 12;
int S2 = 2;
int S3 = 7;

int frequency1 = 0;
int frequency2 = 0;
int frequency3 = 0;
int sensorout = 8;

void setup()
{
   //Setting all pins 4,5,6,7 of Arduino to OUTPUT
   
   pinMode(S0, OUTPUT);
   pinMode(S1, OUTPUT);
   pinMode(S2, OUTPUT);
   pinMode(S3, OUTPUT);

   pinMode(RED, OUTPUT);
   pinMode(GREEN, OUTPUT);
   pinMode(BLUE, OUTPUT);

   //Setting Output frequency to 20%

   digitalWrite(S0, HIGH);
   digitalWrite(S1, LOW);

   Serial.begin(9600);
}

void loop()
{
   digitalWrite(S2, LOW);
   digitalWrite(S3, LOW);

   frequency1 = pulseIn(sensorout, LOW);

   Serial.print("R= ");
   Serial.print(frequency1);
   Serial.print(" ");

   digitalWrite(S2, HIGH);
   digitalWrite(S3, HIGH);

   frequency2 = pulseIn(sensorout, LOW);

   Serial.print("G= ");
   Serial.print(frequency2);
   Serial.print(" ");
   
   digitalWrite(S2, LOW);
   digitalWrite(S3, HIGH);

   frequency3 = pulseIn(sensorout, LOW);

   Serial.print("B= ");
   Serial.print(frequency3);
   Serial.print(" ");
   
   Serial.println("");
   delay(1000);

   R = map(frequency1, 0, 1023, 255. 0);
   G = map(frequency2, 0, 1023, 255, 0);
   B = map(frequency3, 0, 1023, 255, 0);

   analogWrite(RED, R);
   analogWrite(GREEN, G);
   analogWrite(BLUE, B);
}

