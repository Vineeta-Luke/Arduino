// C++ code
//
int buzzerpin=9;
void setup()
{
  pinMode(buzzerpin, OUTPUT);
}

void loop()
{
  tone(buzzerpin,1000);
  delay(1000); // Wait for 1000 millisecond(s)
  noTone(buzzerpin);
  delay(1000); // Wait for 1000 millisecond(s)
}