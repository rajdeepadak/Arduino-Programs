int val0=0;
int val1=0;
int val2=0;
int val3=0;
int val4=0;
int val5=0;

int analog0 = A0;
int analog1 = A1;
int analog2 = A2;
int analog3 = A3;
int analog4 = A4;
int analog5 = A5;

void setup() 
{
Serial.begin(9600);
pinMode(val0, INPUT);
pinMode(val1, INPUT);
pinMode(val2, INPUT);
pinMode(val3, INPUT);
pinMode(val4, INPUT);
pinMode(val5, INPUT);
}

void loop() 
{
val0 = analogRead(analog0);
val1 = analogRead(analog1);
val2 = analogRead(analog2);
val3 = analogRead(analog3);
val4 = analogRead(analog4);
val5 = analogRead(analog5);

Serial.print("x1 = ");
Serial.print(val0);
Serial.print("   x2 = ");
Serial.print(val1);
Serial.print("   x3 = ");
Serial.print(val2);
Serial.print("   x4 = ");
Serial.print(val3);
Serial.print("   x5 = ");
Serial.print(val4);
Serial.print("   x6 = ");
Serial.print(val5);
Serial.print("\n");
delay(200);
}
