// C++ code
//
int led1=2;
int led2=3;
int led3=4;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
void loop()
{
  digitalWrite(led1, HIGH);
  delay(4000); 
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(1000); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(5000); 
  digitalWrite(led3, LOW);
}