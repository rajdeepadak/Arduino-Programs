const int P_S = 13;

void setup() 
{
    pinMode(P_S, OUTPUT);
}

void loop() 
{
    digitalWrite(P_S, LOW);
    delay(10000);
    digitalWrite(P_S, HIGH);
    delay(10000);    
}
