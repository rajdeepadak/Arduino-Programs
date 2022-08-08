int i = 0;
int PWMpin1 = 9;
int IN1pin1 = 3;
int IN2pin1 = 2;

int PWMpin2 = 10;
int IN1pin2 = 7;
int IN2pin2 = 8;

int PWMpin3 = 11;
int IN1pin3 = 13;
int IN2pin3 = 12;

int CSpin = A0;
int val = 0;

void setup()
{
   pinMode(PWMpin1, OUTPUT);
   pinMode(IN1pin1, OUTPUT);
   pinMode(IN2pin1, OUTPUT);
   pinMode(CSpin, INPUT);

   pinMode(PWMpin2, OUTPUT);
   pinMode(IN1pin2, OUTPUT);
   pinMode(IN2pin2, OUTPUT);

   pinMode(PWMpin3, OUTPUT);
   pinMode(IN1pin3, OUTPUT);
   pinMode(IN2pin3, OUTPUT);
}

void forward(void)
{
   digitalWrite(IN1pin1, HIGH);
   digitalWrite(IN2pin1, LOW);

   digitalWrite(IN1pin2, HIGH);
   digitalWrite(IN2pin2, LOW);

   digitalWrite(IN1pin3, HIGH);
   digitalWrite(IN2pin3, LOW);
}

void backward(void)
{
   digitalWrite(IN1pin1, LOW);
   digitalWrite(IN2pin1, HIGH);

   digitalWrite(IN1pin2, LOW);
   digitalWrite(IN2pin2, HIGH);

   digitalWrite(IN1pin3, LOW);
   digitalWrite(IN2pin3, HIGH);
}

void stopmotor(void)
{
   digitalWrite(IN1pin1, HIGH);
   digitalWrite(IN2pin1, HIGH);

   digitalWrite(IN1pin2, HIGH);
   digitalWrite(IN2pin2, HIGH);

   digitalWrite(IN1pin3, HIGH);
   digitalWrite(IN2pin3, HIGH);
}

void loop()
{
   forward();
   delay(5000);

   stopmotor();
   delay(2000);

   backward();
   delay(5000);

  
}

