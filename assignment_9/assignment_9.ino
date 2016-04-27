//Carmen loh
//this is a project with 1 potentiometer, 2 push button, and 1 NeoPixel
//there is different action when pressing button 1, button 2, or both at the same time
#include <Adafruit_NeoPixel.h>

int pix_pin = 8;
int num_pix = 1;
int pot_pin = 6; //A7
int b1 = 9; //button 1
int b2 = 10; //button 2
Adafruit_NeoPixel ring = Adafruit_NeoPixel (num_pix, pix_pin);
struct color
{
  byte red;
  byte green;
  byte blue;
};
color.red = (255, 0, 0);
color.orange = (255, 127, 0);
color.yellow = (255, 255, 0);
color.green = (0, 255, 0);
color.blue = (0, 0, 255);
color.indigo = (75, 0, 130);
color.violet = (139, 0, 255);
color.rainbow = {red, orange, yellow, green, bluw, indigo, ciolet};

void setup() {
  ring.begin();
  pinMode(pot_pin, INPUT);
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);

}

void loop() {
  int delay_time = 1000;
  float intensity = 1.0;
  byte which_color = map(rainbow, 0, 1023, 0 , 6);
  if (digitalRead(b1) == 0) //button 1 is pressed
  {
    delay_time = analogRead(pot_pin);
  }
  else if (digitalRead(b2) == 0) //button 2 is pressed
  {
    float intensity = analogRead(pot_pin) / 1023.0;
  }
  else //both button is pressed
  {
    which_color = map(analogRead(pot_pin), 0 , 1023, 0, 6)
  }

  ring.setPixelColor(0, ring.Color(red[which_color].red * intensity, red[which_color].green * intensity, red[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(orange[which_color].red * intensity, orange[which_color].green * intensity, orange[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(yellow[which_color].red * intensity, yellow[which_color].green * intensity, yellow[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(green[which_color].red * intensity, green[which_color].green * intensity, green[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(blue[which_color].red * intensity, blue[which_color].green * intensity, blue[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(indigo[which_color].red * intensity, indigo[which_color].green * intensity, indigo[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
  ring.setPixelColor(0, ring.Color(violet[which_color].red * intensity, violet[which_color].green * intensity, violet[which_color].blue * intensity));
  ring.show();
  delay(delay_time);
}
