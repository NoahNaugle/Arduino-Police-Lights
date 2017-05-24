/** 

This is a setup I created for addressing individual
LEDS for my specific setup, using the FastLED library.
Anyone can create their own led setup/ Police light bar
using a simple copy/paste idea. It is not the best in the world, 
but if it works it ain't bad right? ;)

Noah

**/

#include "FastLED.h"          // import FastLED library
#define COLOR_ORDER GRB
#define LED_TYPE WS2812
#define NUM_LEDS 53           // 2 leds strips connected to pin 5,6
#define NUM_LEDS3 12          // 1 leds strip connected to pin 7

CRGB leds[NUM_LEDS];
CRGB leds3[NUM_LEDS];

void setup() {
  
  FastLED.addLeds<NEOPIXEL, 5>(leds, NUM_LEDS);       // strip 1
  FastLED.addLeds<NEOPIXEL, 6>(leds, NUM_LEDS);       // strip 2
  FastLED.addLeds<NEOPIXEL, 7>(leds3, NUM_LEDS3);     // strip 3
}

void loop() {
  leds[0] = CRGB::Red;              // remember first led is index 0 
  leds[1] = CRGB::Red;              // and in my case ends at 52
  leds[2] = CRGB::Red;              // the repeated spagetti code, give the illusion of flashing the leds super quickly...
  leds[3] = CRGB::Red;              // the rest is pretty self-understandable, red on, red off(black), blue on, blue off(black)
  leds[4] = CRGB::Red;
  leds[10] = CRGB::Red;
  leds[11] = CRGB::Red;
  leds[12] = CRGB::Red;
  leds[13] = CRGB::Red;
  leds[14] = CRGB::Red;
  leds[20] = CRGB::Red;
  leds[21] = CRGB::Red;
  leds[22] = CRGB::Red;
  leds[23] = CRGB::Red;
  leds[24] = CRGB::Red;
  leds[33] = CRGB::Red;
  leds[34] = CRGB::Red;
  leds[35] = CRGB::Red;
  leds[36] = CRGB::Red;
  leds[37] = CRGB::Red;
  leds[43] = CRGB::Red;
  leds[44] = CRGB::Red;
  leds[45] = CRGB::Red;
  leds[46] = CRGB::Red;
  leds[47] = CRGB::Red;

  leds3[0] = CRGB::Red;
  leds3[1] = CRGB::Red;
  leds3[2] = CRGB::Red;
  leds3[6] = CRGB::Red;
  leds3[7] = CRGB::Red;
  leds3[8] = CRGB::Red;
  
  FastLED.show();
  delay(50);
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[14] = CRGB::Black;
  leds[20] = CRGB::Black;
  leds[21] = CRGB::Black;
  leds[22] = CRGB::Black;
  leds[23] = CRGB::Black;
  leds[24] = CRGB::Black;
  leds[33] = CRGB::Black;
  leds[34] = CRGB::Black;
  leds[35] = CRGB::Black;
  leds[36] = CRGB::Black;
  leds[37] = CRGB::Black;
  leds[43] = CRGB::Black;
  leds[44] = CRGB::Black;
  leds[45] = CRGB::Black;
  leds[46] = CRGB::Black;
  leds[47] = CRGB::Black;

  leds3[0] = CRGB::Black;
  leds3[1] = CRGB::Black;
  leds3[2] = CRGB::Black;
  leds3[6] = CRGB::Black;
  leds3[7] = CRGB::Black;
  leds3[8] = CRGB::Black;
  FastLED.show();
  delay(50);
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Red;
  leds[2] = CRGB::Red;
  leds[3] = CRGB::Red;
  leds[4] = CRGB::Red;
  leds[10] = CRGB::Red;
  leds[11] = CRGB::Red;
  leds[12] = CRGB::Red;
  leds[13] = CRGB::Red;
  leds[14] = CRGB::Red;
  leds[20] = CRGB::Red;
  leds[21] = CRGB::Red;
  leds[22] = CRGB::Red;
  leds[23] = CRGB::Red;
  leds[24] = CRGB::Red;
  leds[33] = CRGB::Red;
  leds[34] = CRGB::Red;
  leds[35] = CRGB::Red;
  leds[36] = CRGB::Red;
  leds[37] = CRGB::Red;
  leds[43] = CRGB::Red;
  leds[44] = CRGB::Red;
  leds[45] = CRGB::Red;
  leds[46] = CRGB::Red;
  leds[47] = CRGB::Red;

  leds3[0] = CRGB::Red;
  leds3[1] = CRGB::Red;
  leds3[2] = CRGB::Red;
  leds3[6] = CRGB::Red;
  leds3[7] = CRGB::Red;
  leds3[8] = CRGB::Red;
  FastLED.show();
  delay(50);
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[14] = CRGB::Black;
  leds[20] = CRGB::Black;
  leds[21] = CRGB::Black;
  leds[22] = CRGB::Black;
  leds[23] = CRGB::Black;
  leds[24] = CRGB::Black;
  leds[33] = CRGB::Black;
  leds[34] = CRGB::Black;
  leds[35] = CRGB::Black;
  leds[36] = CRGB::Black;
  leds[37] = CRGB::Black;
  leds[43] = CRGB::Black;
  leds[44] = CRGB::Black;
  leds[45] = CRGB::Black;
  leds[46] = CRGB::Black;
  leds[47] = CRGB::Black;

  leds3[0] = CRGB::Black;
  leds3[1] = CRGB::Black;
  leds3[2] = CRGB::Black;
  leds3[6] = CRGB::Black;
  leds3[7] = CRGB::Black;
  leds3[8] = CRGB::Black;
  FastLED.show();
  delay(50);
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Red;
  leds[2] = CRGB::Red;
  leds[3] = CRGB::Red;
  leds[4] = CRGB::Red;
  leds[4] = CRGB::Red;
  leds[10] = CRGB::Red;
  leds[11] = CRGB::Red;
  leds[12] = CRGB::Red;
  leds[13] = CRGB::Red;
  leds[14] = CRGB::Red;
  leds[20] = CRGB::Red;
  leds[21] = CRGB::Red;
  leds[22] = CRGB::Red;
  leds[23] = CRGB::Red;
  leds[24] = CRGB::Red;
  leds[33] = CRGB::Red;
  leds[34] = CRGB::Red;
  leds[35] = CRGB::Red;
  leds[36] = CRGB::Red;
  leds[37] = CRGB::Red;
  leds[43] = CRGB::Red;
  leds[44] = CRGB::Red;
  leds[45] = CRGB::Red;
  leds[46] = CRGB::Red;
  leds[47] = CRGB::Red;

  leds3[0] = CRGB::Red;
  leds3[1] = CRGB::Red;
  leds3[2] = CRGB::Red;
  leds3[6] = CRGB::Red;
  leds3[7] = CRGB::Red;
  leds3[8] = CRGB::Red;
  FastLED.show();
  delay(50);
  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[10] = CRGB::Black;
  leds[11] = CRGB::Black;
  leds[12] = CRGB::Black;
  leds[13] = CRGB::Black;
  leds[14] = CRGB::Black;
  leds[20] = CRGB::Black;
  leds[21] = CRGB::Black;
  leds[22] = CRGB::Black;
  leds[23] = CRGB::Black;
  leds[24] = CRGB::Black;
  leds[33] = CRGB::Black;
  leds[34] = CRGB::Black;
  leds[35] = CRGB::Black;
  leds[36] = CRGB::Black;
  leds[37] = CRGB::Black;
  leds[43] = CRGB::Black;
  leds[44] = CRGB::Black;
  leds[45] = CRGB::Black;
  leds[46] = CRGB::Black;
  leds[47] = CRGB::Black;

  leds3[0] = CRGB::Black;
  leds3[1] = CRGB::Black;
  leds3[2] = CRGB::Black;
  leds3[6] = CRGB::Black;
  leds3[7] = CRGB::Black;
  leds3[8] = CRGB::Black;
  FastLED.show();
  delay(50);
  ////
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  leds[48] = CRGB::Blue;
  leds[49] = CRGB::Blue;
  leds[50] = CRGB::Blue;
  leds[51] = CRGB::Blue;
  leds[52] = CRGB::Blue;

  leds3[3] = CRGB::Blue;
  leds3[4] = CRGB::Blue;
  leds3[5] = CRGB::Blue;
  leds3[9] = CRGB::Blue;
  leds3[10] = CRGB::Blue;
  leds3[11] = CRGB::Blue;
  FastLED.show();
  delay(50);
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Black;
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[15] = CRGB::Black;
  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[28] = CRGB::Black;
  leds[29] = CRGB::Black;
  leds[30] = CRGB::Black;
  leds[31] = CRGB::Black;
  leds[32] = CRGB::Black;
  leds[38] = CRGB::Black;
  leds[39] = CRGB::Black;
  leds[40] = CRGB::Black;
  leds[41] = CRGB::Black;
  leds[42] = CRGB::Black;
  leds[48] = CRGB::Black;
  leds[49] = CRGB::Black;
  leds[50] = CRGB::Black;
  leds[51] = CRGB::Black;
  leds[52] = CRGB::Black;

  leds3[3] = CRGB::Black;
  leds3[4] = CRGB::Black;
  leds3[5] = CRGB::Black;
  leds3[9] = CRGB::Black;
  leds3[10] = CRGB::Black;
  leds3[11] = CRGB::Black;
  FastLED.show();
  delay(50);
  leds[5] = CRGB::Blue;
  leds[6] = CRGB::Blue;
  leds[7] = CRGB::Blue;
  leds[8] = CRGB::Blue;
  leds[9] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  leds[48] = CRGB::Blue;
  leds[49] = CRGB::Blue;
  leds[50] = CRGB::Blue;
  leds[51] = CRGB::Blue;
  leds[52] = CRGB::Blue;

  leds3[3] = CRGB::Blue;
  leds3[4] = CRGB::Blue;
  leds3[5] = CRGB::Blue;
  leds3[9] = CRGB::Blue;
  leds3[10] = CRGB::Blue;
  leds3[11] = CRGB::Blue;
  FastLED.show();
  delay(50);
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Black;
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[15] = CRGB::Black;
  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[28] = CRGB::Black;
  leds[29] = CRGB::Black;
  leds[30] = CRGB::Black;
  leds[31] = CRGB::Black;
  leds[32] = CRGB::Black;
  leds[38] = CRGB::Black;
  leds[39] = CRGB::Black;
  leds[40] = CRGB::Black;
  leds[41] = CRGB::Black;
  leds[42] = CRGB::Black;
  leds[48] = CRGB::Black;
  leds[49] = CRGB::Black;
  leds[50] = CRGB::Black;
  leds[51] = CRGB::Black;
  leds[52] = CRGB::Black;

  leds3[3] = CRGB::Black;
  leds3[4] = CRGB::Black;
  leds3[5] = CRGB::Black;
  leds3[9] = CRGB::Black;
  leds3[10] = CRGB::Black;
  leds3[11] = CRGB::Black;
  FastLED.show();
  delay(50);
  leds[0] = CRGB::Blue;
  leds[1] = CRGB::Blue;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Blue;
  leds[4] = CRGB::Blue;
  leds[15] = CRGB::Blue;
  leds[16] = CRGB::Blue;
  leds[17] = CRGB::Blue;
  leds[18] = CRGB::Blue;
  leds[19] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[29] = CRGB::Blue;
  leds[30] = CRGB::Blue;
  leds[31] = CRGB::Blue;
  leds[32] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  leds[39] = CRGB::Blue;
  leds[40] = CRGB::Blue;
  leds[41] = CRGB::Blue;
  leds[42] = CRGB::Blue;
  leds[48] = CRGB::Blue;
  leds[49] = CRGB::Blue;
  leds[50] = CRGB::Blue;
  leds[51] = CRGB::Blue;
  leds[52] = CRGB::Blue;

  leds3[3] = CRGB::Blue;
  leds3[4] = CRGB::Blue;
  leds3[5] = CRGB::Blue;
  leds3[9] = CRGB::Blue;
  leds3[10] = CRGB::Blue;
  leds3[11] = CRGB::Blue;
  FastLED.show();
  delay(50);
  leds[5] = CRGB::Black;
  leds[6] = CRGB::Black;
  leds[7] = CRGB::Black;
  leds[8] = CRGB::Black;
  leds[9] = CRGB::Black;
  leds[15] = CRGB::Black;
  leds[16] = CRGB::Black;
  leds[17] = CRGB::Black;
  leds[18] = CRGB::Black;
  leds[19] = CRGB::Black;
  leds[28] = CRGB::Black;
  leds[29] = CRGB::Black;
  leds[30] = CRGB::Black;
  leds[31] = CRGB::Black;
  leds[32] = CRGB::Black;
  leds[38] = CRGB::Black;
  leds[39] = CRGB::Black;
  leds[40] = CRGB::Black;
  leds[41] = CRGB::Black;
  leds[42] = CRGB::Black;
  leds[48] = CRGB::Black;
  leds[49] = CRGB::Black;
  leds[50] = CRGB::Black;
  leds[51] = CRGB::Black;
  leds[52] = CRGB::Black;

  leds3[3] = CRGB::Black;
  leds3[4] = CRGB::Black;
  leds3[5] = CRGB::Black;
  leds3[9] = CRGB::Black;
  leds3[10] = CRGB::Black;
  leds3[11] = CRGB::Black;
  FastLED.show();
  delay(50);
}

