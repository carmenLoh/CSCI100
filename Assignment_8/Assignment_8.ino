//rainbow color with 1 second delay on the NeoPixel
#include <Adafruit_NeoPixel.h>

int num_pixels = 1;
int pixel_pin = 8;
Adafruit_NeoPixel ring = Adafruit_NeoPixel(num_pixels,pixel_pin);

void setup() //Adafruit_NeoPixel began
{
  ring.begin();
}

void loop() //rainbow color display with 1 second delay
{
  ring.setPixelColor(0, ring.Color(127,0,0));
  ring.show();
  delay(1000);
  ring.setPixelColor(0, ring.Color(127,63,0));
  ring.show();
  delay(1000);
  ring.setPixelColor(0, ring.Color(127,127,0));
  ring.show();
  delay(1000);
  ring.setPixelColor(0, ring.Color(0,127,0));
  ring.show();
  delay(1000);
  ring.setPixelColor(0, ring.Color(0,0,127));
  ring.show();
  delay(1000);
  ring.setPixelColor(0, ring.Color(37,0,127));
  ring.show();
  delay(1000);
  ring.setPixelColor(0, ring.Color(69,0,127));
  ring.show();
  delay(1000);
}
