//carmen Loh
//this is a mouse maze simulator we used 3 pushbuttons and 4 LED to simulate the mouse maze
int wallleft = 12;
int wallfront = 6;
int wallright = 9;
int goleft = 1;
int gostraight = 0;
int goright = 2;
int turnaround = 3;

void setup()
{
  pinMode(wallleft, INPUT_PULLUP);
  pinMode(wallfront, INPUT_PULLUP);
  pinMode(wallright, INPUT_PULLUP);
  pinMode(goleft, OUTPUT);
  pinMode(gostraight, OUTPUT);
  pinMode(goright, OUTPUT);
  pinMode(turnaround, OUTPUT);
}

void loop()
{
  digitalWrite(goleft, LOW);
  digitalWrite(gostraight, LOW);
  digitalWrite(goright, LOW);
  digitalWrite(turnaround, LOW);

  if (digitalRead(wallright)) //wall right button is pressed it mean there is right wall
  {
    digitalWrite(goright, HIGH); //go righ LED off
  }
  else if (digitalRead(wallfront)) //wall front button is pressed it mean there is front wall
  {
    digitalWrite(gostraight, HIGH); //go straight LED off
  }
  else if (digitalRead(wallleft)) // wall left button is pressed it mean there is left wall
  {
    digitalWrite(goleft, HIGH); //go left LED off
  }
  else
  {
    digitalWrite(turnaround, HIGH); //trun around LED on (all button pressed it mean there is wall on 3 side)
  }
}
