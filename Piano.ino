// C++ code
//
int buzzerpin=9;
void setup() {
  pinMode(buzzerpin,OUTPUT);
}

void loop() {
  tone(buzzerpin,500);
  delay(500);
  noTone(buzzerpin);
  delay(500);
  
  tone(buzzerpin,1000);
  delay(500);
  noTone(buzzerpin);
  delay(500);
  
  tone(buzzerpin,300);
  delay(500);
  noTone(buzzerpin);
  delay(500);
  
  tone(buzzerpin,1500);
  delay(500);
  noTone(buzzerpin);
  delay(500);
  
  tone(buzzerpin,1800);
  delay(500);
  noTone(buzzerpin);
  delay(500);
  
  tone(buzzerpin,700);
  delay(500);
  noTone(buzzerpin);
  delay(500);
}