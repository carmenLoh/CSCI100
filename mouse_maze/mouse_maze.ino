//carmen Loh
//this assignment 7 is a mouse maze simulator using 3 push buttons and 4 LEDs
int wallLeft = 12;
int wallFront = 6;
int wallRight = 9;
int goLeft = 1;
int goStraight = 0;
int goRight = 2;
int turnAround = 3;

void setup()
{
  pinMode(wallLeft, INPUT);
  pinMode(wallFront, INPUT);
  pinMode(wallRight, INPUT);
  pinMode(goLeft, OUTPUT);
  pinMode(goStraight, OUTPUT);
  pinMode(goRight, OUTPUT);
  pinMode(turnAround, OUTPUT);
}

void loop()
{
  if (digitalRead(wallRight) == HIGH) //on wall on right
  {
    digitalWrite(goRight, HIGH); //go right LED is on
  }
  else
  {
    digitalWrite(goLeft, LOW);
    digitalWrite(goStraight, LOW);
    digitalWrite(goRight, LOW);
    digitalWrite(turnAround, LOW);
  }
  if (digitalRead(wallFront) == HIGH && digitalRead(wallRight) == LOW)
  {
    digitalWrite(goStraight, HIGH);
    digitalWrite(goRight, LOW);
  }
  else
  {
    digitalWrite(goLeft, LOW);
    digitalWrite(goStraight, LOW);
    digitalWrite(goRight, LOW);
    digitalWrite(turnAround, LOW);
  }
  if (digitalRead(wallLeft) == HIGH && digitalRead(wallFront) == LOW && digitalRead(wallRight) == LOW)
  {
    digitalWrite(goLeft, HIGH);
    digitalWrite(goStraight, LOW);
    digitalWrite(goRight, LOW);
  }
  else
  {
    digitalWrite(goLeft, LOW);
    digitalWrite(goStraight, LOW);
    digitalWrite(goRight, LOW);
    digitalWrite(turnAround, LOW);
  }
  if (digitalRead(wallLeft) == LOW && digitalRead(wallFront) == LOW && digitalRead(wallRight) == LOW)
  {
    digitalWrite(turnAround, HIGH);
    digitalWrite(goLeft, LOW);
    digitalWrite(goStraight, LOW);
    digitalWrite(goRight, LOW);
  }
}

