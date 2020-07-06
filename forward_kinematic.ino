#include<math.h>
#include <Servo.h>

float x = 0;
float y = 0;
float L1 = 10;
float L2 = 10;
float Q1 = 30;
float Q2 = 50;
float pi = 3.14;

Servo servo_9;
Servo servo_10;

void setup()
{
  Serial.begin(9600);
  servo_9.attach(9);
  servo_10.attach(10);
}

void loop()
{
  float Q11 = Q1*pi/180;
  float Q12 = (Q1+Q2)*pi/180;
  x= L1*cos(Q11)+L2*cos(Q12);
  y= L1*sin(Q11)+L2*sin(Q12);
  Serial.print("x= ");
  Serial.print(x);
  Serial.print(", ");
  Serial.print("y= ");
  Serial.print(y);
  Serial.print(" ... ");
  servo_9.write(Q1);
  servo_10.write(Q2);
  delay(2000); 
  servo_9.write(0);
  servo_10.write(0);
  delay(2000);
}