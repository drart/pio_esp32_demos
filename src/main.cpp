#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#ifdef NEOPIXELPIN
Adafruit_NeoPixel pixels(1, NEOPIXELPIN, NEO_GRB+ NEO_KHZ800);
#endif

void setup() {
  #ifdef NEOPIXELPIN
  pixels.begin();
  pixels.clear();
  #endif
  #ifdef LEDPIN
  pinMode(LEDPIN, OUTPUT);
  #endif
}

void loop() { 
  #ifdef NEOPIXELPIN
  pixels.setPixelColor(0, pixels.Color(255,0,0));
  pixels.show();
  #endif

  #ifdef LEDPIN
  digitalWrite(LEDPIN, HIGH);
  #endif

  delay(200);

  #ifdef NEOPIXELPIN
  pixels.setPixelColor(0, pixels.Color(0,255,0));
  pixels.show();
  #endif

  #ifdef LEDPIN
  digitalWrite(LEDPIN, LOW);
  #endif
  
  delay(200);
}