int wallLeft = 12;
int wallFront = 6;
int wallRight = 9;
int goLeft = 1;
int goStraight = 0;
int goRight = 2;
int turnAround = 3;

void setup()
{
  pinMode(wallLeft, INPUT_PULLUP);
  pinMode(wallFront, INPUT_PULLUP);
  pinMode(wallRight, INPUT_PULLUP);
  pinMode(goLeft, OUTPUT);
  pinMode(goStraight, OUTPUT);
  pinMode(goRight, OUTPUT);
  pinMode(turnAround, OUTPUT);
}

void loop() {
  if (digitalRead(wallRight) == 1)
  {
    digitalWrite(goRight, HIGH);
  }
  else (digitalRead(wallFront) == 1);
  {
    digitalWrite(goStraight, HIGH);
  }

  if (digitalRead(wallLeft) == 1)
  {
    digitalWrite(goLeft, HIGH);
  }
  else
  {
    digitalWrite(turnAround, HIGH);
  }
}


