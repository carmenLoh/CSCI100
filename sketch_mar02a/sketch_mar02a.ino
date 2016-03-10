//pin 7 has an LED connected on Flora
//give it a name:
int LED = 7;
void setup() {
pinMode(LED, OUTPUT); //initialize the digital pin as an output.
}

void loop() {
digitalWrite(LED, HIGH); //TURN LED ON
delay(1000); //wait for 1 sec.
digitalWrite(LED, LOW); //TURN LED OFF
delay(4000); //wait for 4 sec.
}
