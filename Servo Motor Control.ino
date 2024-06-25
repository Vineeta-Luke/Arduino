// C++ code
//
#include <Servo.h>
Servo myServo;
int servoPin=9;
int i=0;
void setup() 
{
  myServo.attach(servoPin);
}

void loop() 
{
  for (i=0;i<=180;i+=1)
 {
  myServo.write(i);
  delay(15);
 }
 for (i=180;i>=0;i-=1)
 {
  myServo.write(i);
  delay(15);
 }
}