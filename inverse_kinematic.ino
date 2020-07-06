#include<math.h>
#include <Servo.h>

float x = 19;
float y = 4;
float L1 = 10;
float L2 = 10;
float Q = 80;
float Q1 = 0;
float Q2 = 0;
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
  Q2 = acos((x*x+y*y-L1*L1-L2*L2)/(2*L1*L2));
  Q2 = Q2*180/pi;
  Q1 = Q - Q2;
  Serial.print("Q1= ");
  Serial.print(Q1);
  Serial.print(", ");
  Serial.print("Q2= ");
  Serial.print(Q2);
  Serial.print(" ... ");
  servo_9.write(Q1);
  servo_10.write(Q2);
  delay(2000);
  servo_9.write(0);
  servo_10.write(0);
  delay(2000);
}