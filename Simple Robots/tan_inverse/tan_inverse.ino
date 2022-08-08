float theta;
float x, y;

void setup()
{
   Serial.begin(9600);
}

void loop()
{
   x = analogRead(A1);
   y = analogRead(A2);
   
   x = x - 524;
   y = y - 507;

   theta = atan(x/y);
   Serial.print("x = ");
   Serial.print(x);
   Serial.print("  y = ");
   Serial.print(y);
   Serial.print("  theta = ");
   Serial.print(theta*180/3.14285);
   Serial.println(" ");  
}

