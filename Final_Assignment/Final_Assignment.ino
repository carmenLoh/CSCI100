//han wen Loh & CarMen Loh
//this is a devicve that when you get closer, it get brighter
//we used potentiometer to repersent distance measurer
#include <Adafruit_NeoPixel.h>
int pot_pin = 6;  //potentiometer at pin 6, as the pot. get greater which repersent it get closer, as it get smaller it repersent it get farer 
int num_pixel = 16; 
int NPR = 10; //NeoPixel Ring
Adafruit_NeoPixel ring = Adafruit_NeoPixel (num_pixel, NPR);
int color[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; //the pixels in order of animation

void setup() {
  ring.begin();

}

void loop() {
  ring.setBrightness(analogRead(pot_pin)); //detect pot. as distance measurer
  ring.show();
  for (int i=0; i<16; i++)
  {
    ring.setPixelColor(color[i], ring.Color(255,0,0)); //red color pixels
    delay(100);
    for (int j=0; j<4; j++)
    {
      ring.setPixelColor(color[(j+i+1)%36], ring.Color(0,0,0)); //turn pixel to black(no color) after every other 4 pixel
    }
  ring.show();
   }
 }
