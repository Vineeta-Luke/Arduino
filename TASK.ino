// C++ code
//
int led=13;
int button1=2;
int button2=3;
int button3=4;
int button4=5;
int bs1=0;
int bs2=0;
int bs3=0;
int bs4=0;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
}

void loop() {
  bs1=digitalRead(button1);
  bs2=digitalRead(button2);
  bs3=digitalRead(button3);
  bs4=digitalRead(button4);
  if (bs1==HIGH && bs3==HIGH)
  {
    if (bs2==LOW && bs4==LOW)
    {
      digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
    }
  }
  else 
  {
    digitalWrite(led,LOW);
  }
}