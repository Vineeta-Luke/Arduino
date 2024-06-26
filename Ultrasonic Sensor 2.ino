// C++ code
//
int trig=10;
int echo=9;
long duration;
int distance;
void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
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
  delay(500);
}