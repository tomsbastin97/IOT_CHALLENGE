# Kerala IoT Challenge Level1

> **Foxlab Makerspace** in association with **GTech - Group of Technology Companies** in Kerala is launching our prestigious program  **“Kerala IoT Challenge 2021”**,  with a vision to mould 100 IoT experts in Kerala, hosting on the µLearn platform. **Kerala IoT Challenge** is a program designed in 4 levels followed by a hackathon to identify and train quality industry leaders in the IoT domain, while any novice learner can start with layer 1 and others can enter laterally to the desired layer after an evaluation.


### Experiment 1 - Hello World LED Blinking

#### Components Required:
Arduino Uno Board

USB Cable

LED (Any Color) x 1 Nos

220 OHM Resistor X 1 Nos

Breadboard

Jumper Wires (Male to Male ) X 2 Nos

#### Circuit Diagram:
![Screenshot from 2021-09-12 20-34-31](https://user-images.githubusercontent.com/67751535/132992862-5b25a2bf-22a0-4e4d-bc98-90ffeee61bea.png)

#### Code
```ino
void setup() 
{
   pinMode(8, OUTPUT);
}
void loop() {
  digitalWrite(8, HIGH);
  delay(1000);
  digitalWrite(8, LOW);
  delay(1000);
}
```
#### Output:
![exp1_hello](https://user-images.githubusercontent.com/67751535/132454490-03694c34-4df2-432d-ba16-6b2e4bb9c935.jpg)


### Experiment 2 - Traffic Light

![exp2](https://user-images.githubusercontent.com/67751535/132454521-99fd6786-77fe-434a-8ea2-9eea5ce0c548.jpg)

#### Components required:
Arduino board *1

USB cable *1

Red M5 LED*1

Yellow M5 LED*1

Green M5 LED*1

220Ω resistor *3

Breadboard*1

Breadboard jumper wires* several

#### Circuit Diagram:
![Screenshot from 2021-09-12 20-34-46](https://user-images.githubusercontent.com/67751535/132992943-f7dcafee-3a69-4f9d-8de3-7a83e41ae5ea.png)

#### Code
```ino
void setup() 
{
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(5000);
  digitalWrite(13, LOW);
  
  for(int i=0; i<3; i++)
  {
    delay(500);
    digitalWrite(12, HIGH);
    delay(500);
    digitalWrite(12, LOW);
  }
  
  delay(500);
  digitalWrite(8, HIGH);
  delay(5000);
  digitalWrite(8, LOW);
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/U7O_d0GM-MY" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Experiment 3 - LED Chasing Effect

![exp3](https://user-images.githubusercontent.com/67751535/132454580-83709401-5780-4cec-9108-f242f961bbe3.jpg)

#### Components Required:
Led *6

Arduino board *1

220Ω resistor *6

Breadboard *1

USB cable*1

Breadboard wire *13

#### Circuit Diagram:
![Screenshot from 2021-09-12 20-46-13](https://user-images.githubusercontent.com/67751535/132993268-45b3b2ef-1b93-415f-938a-9b02cfebccb5.png)

#### Code
```ino
int BASE = 2 ;
int NUM = 6;
void setup()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     pinMode(i, OUTPUT);
   }
}
void loop()
{
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, LOW);
     delay(200);
   }
   for (int i = BASE; i < BASE + NUM; i ++) 
   {
     digitalWrite(i, HIGH);
     delay(200);
   }  
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/6DS2jtWwgxc" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Experiment 4 - Button Controlled LED

![exp4_buttonOff](https://user-images.githubusercontent.com/67751535/132454628-df345884-fea5-4c36-a214-72d3ebe6b396.jpg)

#### Components Required:
Arduino Uno

Button switch*1

Red M5 LED*1

220ΩResistor*1

10KΩ Resistor*1

Breadboard*1

Breadboard Jumper Wire*6

USB cable*1

#### Circuit Diagram:
![Screenshot from 2021-09-12 20-48-59](https://user-images.githubusercontent.com/67751535/132993278-915412d5-bfac-4f5a-86c5-78ae0ea276c0.png)

#### Code
```ino
int x;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(7, INPUT);
}
void loop()
{
  val=digitalRead(7);
  if(x == LOW)
  {
    digitalWrite(11, LOW);
  }
  else
  {
    digitalWrite(11, HIGH);
  }
}
```
#### Output:
![exp4_butOn](https://user-images.githubusercontent.com/67751535/132454669-a6688f6b-36e7-4a9b-ad3a-d11cbbaaf6c2.jpg)


### Experiment 5 - Buzzer

#### Components Required:
Arduino Uno

Buzzer*1

Breadboard*1

Breadboard Jumper Wire*2

USB cable*1

#### Circuit Diagram:
![Screenshot from 2021-09-12 20-52-03](https://user-images.githubusercontent.com/67751535/132993426-df0800b3-e1f0-48e3-874c-bce3b8a18ed9.png)

#### Code
```ino
int x = 8;
void setup() 
{ 
  pinMode(x,OUTPUT);
} 
void loop() 
{
  digitalWrite(x, HIGH);
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/iyVhGtBd2jw" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>


### Experiment 6 - RGB LED

![exp6](https://user-images.githubusercontent.com/67751535/132455166-ffe38d84-8e1a-4013-bd79-1ab58725a993.jpg)

#### Components Required:
Arduino Uno

USB Cable * 1

RGB LED * 1

Resistor *3

Breadboard jumper wire*5

#### Circuit Diagram:
![Screenshot from 2021-09-12 20-53-19](https://user-images.githubusercontent.com/67751535/132993435-b08d4290-243c-4472-885c-eb5d8878882b.png)

#### Code
```ino
int red = 11;
int blue =10;
int green =9;
int x;
void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
for(x=255; x>0; x--)
  {
   analogWrite(11, x);
   analogWrite(10, 255-x);
   analogWrite(9, 128-x);
   delay(10); 
  }
for(x=0; x<255; x++)
  {
   analogWrite(11, x);
   analogWrite(10, 255-x);
   analogWrite(9, 128-x);
   delay(10); 
  }
 Serial.println(x, DEC);
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/OAAo43o_JXI" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Experiment 7 - LDR Light Sensor

![exp7](https://user-images.githubusercontent.com/67751535/132455193-3f415888-d24f-40dd-b17b-efc2b8e6b9af.jpg)

#### Circuit Diagram:
![Screenshot from 2021-09-13 15-01-14](https://user-images.githubusercontent.com/67751535/133060945-797e88dc-836e-4833-8f15-8dad7745cb89.png)

#### Components Required:
Arduino Uno Board

Photo Resistor*1

Red M5 LED*1

10KΩ Resistor*1

220Ω Resistor*1

Breadboard*1

Breadboard Jumper Wire*5

USB cable*1

#### Code
```ino
int potpin=0;// initialize analog pin 0, connected with photovaristor
int ledpin=11;// initialize digital pin 11, 
int val=0;// initialize variable val
void setup()
{
pinMode(ledpin,OUTPUT);// set digital pin 11 as “output”
Serial.begin(9600);// set baud rate at “9600”
}
void loop()
{
val=analogRead(potpin);// read the value of the sensor and assign it to val
Serial.println(val);// display the value of val
analogWrite(ledpin,val/4);// set up brightness（maximum value 255）
delay(10);// wait for 0.01 
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/zkZVZ_lKBCY" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Experiment 8 - Flame Sensor

![exp8](https://user-images.githubusercontent.com/67751535/132455233-33379aef-e66c-4e49-8d39-64c7eb37d66f.jpg)

# Circuit Diagram:
![Screenshot from 2021-09-13 15-02-23](https://user-images.githubusercontent.com/67751535/133061110-990053c3-ef59-49d9-8550-6e1ddd0a64e4.png)

#### Components Required:
Arduino Uno Board*1

Flame Sensor *1

Buzzer *1

10K Resistor *1

Breadboard Jumper Wire*6

USB cable*1

#### Code
```ino
int flame=0;// select analog pin 0 for the sensor
int Beep=9;// select digital pin 9 for the buzzer
int val=0;// initialize variable
 void setup() 
{
  pinMode(Beep,OUTPUT);// set LED pin as “output”
 pinMode(flame,INPUT);// set buzzer pin as “input”
 Serial.begin(9600);// set baud rate at “9600”
 } 
void loop() 
{ 
  val=analogRead(flame);// read the analog value of the sensor 
  Serial.println(val);// output and display the analog value
  if(val>=600)// when the analog value is larger than 600, the buzzer will buzz
  {  
   digitalWrite(Beep,HIGH); 
   }else 
   {  
     digitalWrite(Beep,LOW); 
    }
   delay(500); 
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/L5onDXsYdF4" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Experiment 9 - LM35 Temperature Sensor

#### Components Required:
Arduino Uno  Board*1

LM35*1

Breadboard*1

Breadboard Jumper Wire*5

USB cable

#### Circuit Diagram:
![Screenshot from 2021-09-13 15-03-34](https://user-images.githubusercontent.com/67751535/133061202-06459057-ebe6-407b-895d-1f8926c28a15.png)

#### Code
```ino
int potPin = 0; // initialize analog pin 0 for LM35 temperature sensor
void setup()
{
Serial.begin(9600);// set baud rate at”9600”
}
void loop()
{
int val;// define variable
int dat;// define variable
val=analogRead(0);// read the analog value of the sensor and assign it to val
dat=(125*val)>>8;// temperature calculation formula
Serial.print("Tep");// output and display characters beginning with Tep
Serial.print(dat);// output and display value of dat
Serial.println("C");// display “C” characters
delay(500);// wait for 0.5 second
}
```
#### Output:
![exp9_lm35 toms](https://user-images.githubusercontent.com/67751535/132455377-eaac8444-3624-47ec-a2b6-61cce2042109.png)


### Experiment 10 - IR Remote Control Using TSOP

![image](https://user-images.githubusercontent.com/77291059/132124762-6a958e10-e01e-43b2-add0-0ef739ff107d.png)

#### Components Required:
Arduino Uno Board*1

Infrared Remote Controller(You can use TV Remote or any other remote) *1

Infrared Receiver *1

LED *6

220ΩResistor *6

Breadboard Wire *11

USB cable*1

#### Circuit Diagram:
![Screenshot from 2021-09-13 15-09-34](https://user-images.githubusercontent.com/67751535/133062232-091f5d2c-b6f3-4397-995d-25ecdfb68225.png)

#### Code
```ino
#include <IRremote.h>
int RECV_PIN = 11;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;
long on1  = 0x00FF6897;
long off1 = 0x00FF9867;
long on2 = 0x00FFB04F;
long off2 = 0x00FF30CF;
long on3 = 0x00FF18E7;
long off3 = 0x00FF7A85;
long on4 = 0x00FF10EF;
long off4 = 0x00FF38C7;
long on5 = 0x00FF5AA5;
long off5 = 0x00FF42BD;
long on6 = 0x00FF4AB5;
long off6 = 0x00FF52AD;
IRrecv irrecv(RECV_PIN);
decode_results results;
// Dumps out the decode_results structure.
// Call this after IRrecv::decode()
// void * to work around compiler issue
//void dump(void *v) {
//  decode_results *results = (decode_results *)v
void dump(decode_results *results) {
  int count = results->rawlen;
  if (results->decode_type == UNKNOWN) 
    {
     Serial.println("Could not decode message");
    } 
  else 
   {
    if (results->decode_type == NEC) 
      {
       Serial.print("Decoded NEC: ");
      } 
    else if (results->decode_type == SONY) 
      {
       Serial.print("Decoded SONY: ");
      } 
    else if (results->decode_type == RC5) 
      {
       Serial.print("Decoded RC5: ");
      } 
    else if (results->decode_type == RC6) 
      {
       Serial.print("Decoded RC6: ");
      }
     Serial.print(results->value, HEX);
     Serial.print(" (");
     Serial.print(results->bits, DEC);
     Serial.println(" bits)");
   }
     Serial.print("Raw (");
     Serial.print(count, DEC);
     Serial.print("): ");
 for (int i = 0; i < count; i++) 
     {
      if ((i % 2) == 1) {
      Serial.print(results->rawbuf[i]*USECPERTICK, DEC);
     } 
    else  
     {
      Serial.print(-(int)results->rawbuf[i]*USECPERTICK, DEC);
     }
    Serial.print(" ");
     }
      Serial.println("");
     }
void setup()
 {
  pinMode(RECV_PIN, INPUT);   
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(LED6, OUTPUT);  
  pinMode(13, OUTPUT);
  Serial.begin(9600);
   irrecv.enableIRIn(); // Start the receiver
 }
int on = 0;
unsigned long last = millis();
void loop() 
{
  if (irrecv.decode(&results)) 
   {
    // If it's been at least 1/4 second since the last
    // IR received, toggle the relay
    if (millis() - last > 250) 
      {
       on = !on;
//       digitalWrite(8, on ? HIGH : LOW);
       digitalWrite(13, on ? HIGH : LOW);
       dump(&results);
      }
    if (results.value == on1 )
       digitalWrite(LED1, HIGH);
    if (results.value == off1 )
       digitalWrite(LED1, LOW); 
    if (results.value == on2 )
       digitalWrite(LED2, HIGH);
    if (results.value == off2 )
       digitalWrite(LED2, LOW); 
    if (results.value == on3 )
       digitalWrite(LED3, HIGH);
    if (results.value == off3 )
       digitalWrite(LED3, LOW);
    if (results.value == on4 )
       digitalWrite(LED4, HIGH);
    if (results.value == off4 )
       digitalWrite(LED4, LOW); 
    if (results.value == on5 )
       digitalWrite(LED5, HIGH);
    if (results.value == off5 )
       digitalWrite(LED5, LOW); 
    if (results.value == on6 )
       digitalWrite(LED6, HIGH);
    if (results.value == off6 )
       digitalWrite(LED6, LOW);        
    last = millis();      
irrecv.resume(); // Receive the next value
  }
}
```    


### Experiment 11 - Potentiometer analog Value Reading

![exp11](https://user-images.githubusercontent.com/67751535/132455671-4a06b2d2-0e4e-4d01-87df-2524462e1add.jpg)

#### Components Required:
Arduino Uno Board*1

10K Potentiometer *1

Breadboard*1

Breadboard Jumper Wire*3

USB cable*1

#### Circuit Diagram:
![Screenshot from 2021-09-13 15-12-51](https://user-images.githubusercontent.com/67751535/133062287-e627e3b1-19af-4de1-8417-10128857ef1c.png)

#### Code
```ino
int potpin=0;// initialize analog pin 0
int ledpin=13;// initialize digital pin 13
int val=0;// define val, assign initial value 0
void setup()
{
pinMode(ledpin,OUTPUT);// set digital pin as “output”
Serial.begin(9600);// set baud rate at 9600
}
void loop()
{
digitalWrite(ledpin,HIGH);// turn on the LED on pin 13
delay(50);// wait for 0.05 second
digitalWrite(ledpin,LOW);// turn off the LED on pin 13
delay(50);// wait for 0.05 second
val=analogRead(potpin);// read the analog value of analog pin 0, and assign it to val 
Serial.println(val);// display val’s value
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/NHFjnXhwGJY" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Experiment 12 - 7 Segment Display

![exp12](https://user-images.githubusercontent.com/67751535/132455717-bb544a87-8335-491e-8bcc-9595c5af6efa.jpg)

#### Components Required:
Arduino Uno Board*1

1-digit LED Segment Display*1

220Ω Resistor*8

Breadboard*1

Breadboard Jumper Wires *several

USB cable*1

#### Circuit Diagram:
![Screenshot from 2021-09-13 15-13-05](https://user-images.githubusercontent.com/67751535/133062317-3e931a7a-d519-42a4-bd31-ab597269cf98.png)

#### Code
```ino
int a=7;// set digital pin 7 for segment a
int b=6;// set digital pin 6 for segment b
int c=5;// set digital pin 5 for segment c
int d=10;// set digital pin 10 for segment d
int e=11;// set digital pin 11 for segment e
int f=8;// set digital pin 8 for segment f
int g=9;// set digital pin 9 for segment g
int dp=4;// set digital pin 4 for segment dp
void digital_0(void) // display number 5
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,LOW);
digitalWrite(dp,LOW);
}
void digital_1(void) // display number 1
{
unsigned char j;
digitalWrite(c,HIGH);// set level as “high” for pin 5, turn on segment c
digitalWrite(b,HIGH);// turn on segment b
for(j=7;j<=11;j++)// turn off other segments
digitalWrite(j,LOW);
digitalWrite(dp,LOW);// turn off segment dp
}
void digital_2(void) // display number 2
{
unsigned char j;
digitalWrite(b,HIGH);
digitalWrite(a,HIGH);
for(j=9;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
digitalWrite(c,LOW);
digitalWrite(f,LOW);
}
void digital_3(void) // display number 3
{digitalWrite(g,HIGH);
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(dp,LOW);
digitalWrite(f,LOW);
digitalWrite(e,LOW);
}
void digital_4(void) // display number 4
{digitalWrite(c,HIGH);
digitalWrite(b,HIGH);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
digitalWrite(a,LOW);
digitalWrite(e,LOW);
digitalWrite(d,LOW);
}
void digital_5(void) // display number 5
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b, LOW);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void digital_6(void) // display number 6
{
unsigned char j;
for(j=7;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(c,HIGH);
digitalWrite(dp,LOW);
digitalWrite(b,LOW);
}
void digital_7(void) // display number 7
{
unsigned char j;
for(j=5;j<=7;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
for(j=8;j<=11;j++)
digitalWrite(j,LOW);
}
void digital_8(void) // display number 8
{
unsigned char j;
for(j=5;j<=11;j++)
digitalWrite(j,HIGH);
digitalWrite(dp,LOW);
}
void digital_9(void) // display number 5
{
unsigned char j;
digitalWrite(a,HIGH);
digitalWrite(b,HIGH);
digitalWrite(c,HIGH);
digitalWrite(d,HIGH);
digitalWrite(e, LOW);
digitalWrite(f,HIGH);
digitalWrite(g,HIGH);
digitalWrite(dp,LOW);
}
void setup()
{
int i;// set variable
for(i=4;i<=11;i++)
pinMode(i,OUTPUT);// set pin 4-11as “output”
}
void loop()
{
while(1)
{
digital_0();// display number 0
delay(1000);// wait for 1s
digital_1();// display number 1
delay(1000);// wait for 1s
digital_2();// display number 2
delay(1000); // wait for 1s
digital_3();// display number 3
delay(1000); // wait for 1s
digital_4();// display number 4
delay(1000); // wait for 1s
digital_5();// display number 5
delay(1000); // wait for 1s
digital_6();// display number 6
delay(1000); // wait for 1s
digital_7();// display number 7
delay(1000); // wait for 1s
digital_8();// display number 8
delay(1000); // wait for 1s
digital_9();// display number 9
delay(1000); // wait for 1s
}}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/mdCAwSS6UlY" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Assignment1 - Thermometer using LED and LM35

![exp14](https://user-images.githubusercontent.com/67751535/132455923-30b41212-9438-4c62-9d74-5516ac9656bb.jpg)

#### Code
```ino
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
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/c9MO5_uWXug" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


### Assignment2 - Digital Dice

![exp13](https://user-images.githubusercontent.com/67751535/132455961-dda5ca0f-0274-43c4-85ec-fbaba5918371.jpg)

#### Code
```ino
int f = 5;
int g = 6;
int e = 7;
int d = 8;
int c = 9;
int b = 11;
int a = 12;  //7 Segment pin

int buttonPin=13;
int buttonState=0;
int state=0;
  

void setup() {

  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() 
{
 buttonState=digitalRead(buttonPin);
 if (buttonState == HIGH){
 state = random(1,7); // take random values from 1 to 6
 switch(state){
 
 case 1:
 digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,0);   // 1
 
 break;
 
 case 2:  
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,0);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,0);  
 digitalWrite(g,1);   // 2

 break;
 
 case 3:
 digitalWrite(a,1); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,0);  
 digitalWrite(f,0);  
 digitalWrite(g,1);   // 3

 break;
  
case 4: 
 digitalWrite(a,0); 
 digitalWrite(b,1);  
 digitalWrite(c,1);  
 digitalWrite(d,0);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 4
  
  break;
    
case 5:
 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,0);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 5

  break;
  
 case 6: 
 digitalWrite(a,1); 
 digitalWrite(b,0);  
 digitalWrite(c,1);  
 digitalWrite(d,1);  
 digitalWrite(e,1);  
 digitalWrite(f,1);  
 digitalWrite(g,1);   // 6

  break;
 }             
}
}
```
#### Output:
<iframe width="560" height="315" src="https://www.youtube.com/embed/xXhybyqHd7w" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>    


