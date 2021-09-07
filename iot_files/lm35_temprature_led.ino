const int tempPin = A0;
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int LED5 = 6;
const int LED6 = 7;
float temp = 0;
void setup() {
pinMode(tempPin , INPUT);
pinMode(LED1 , OUTPUT);
pinMode(LED2 , OUTPUT);
pinMode(LED3 , OUTPUT);
pinMode(LED4 , OUTPUT);
pinMode(LED5 , OUTPUT);
pinMode(LED6 , OUTPUT);

Serial.begin(9600);
}
void loop() {
temp = analogRead(tempPin);
temp = (5.0 * temp * 100)/1023;
Serial.println(temp);
if ( temp >= 22 )
{
digitalWrite(LED1, HIGH);
}
else
{
digitalWrite(LED1, LOW);
}
if ( temp >= 23 )
{
digitalWrite(LED2, HIGH);
}
else
{
digitalWrite(LED2, LOW);
}
if ( temp >= 25 )
{
digitalWrite(LED3, HIGH);
}
else
{
digitalWrite(LED3, LOW);
}
if ( temp >= 30 )
{
digitalWrite(LED4, HIGH);
}
else
{
digitalWrite(LED4, LOW);
}
if ( temp >= 34 )
{
digitalWrite(LED5, HIGH);
}
else
{
digitalWrite(LED5, LOW);
}
if ( temp >= 39 )
{
digitalWrite(LED6, HIGH);
}
else
{
digitalWrite(LED6, LOW);
}
}
