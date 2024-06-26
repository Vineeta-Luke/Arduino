// C++ code
//
int trig=10;
int echo=9;
int buzzerpin=12;
int led=2;
long duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzerpin,OUTPUT);
  pinMode(led,OUTPUT);
}
void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=duration*0.034/2.0;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
  if (distance>=100)
  {
    digitalWrite(led,HIGH);
    tone(buzzerpin,1000);
    delay(1000);
  }
  else
  {
    digitalWrite(led,LOW);
    noTone(buzzerpin);
    delay(1000);
  }
  delay(500);
}