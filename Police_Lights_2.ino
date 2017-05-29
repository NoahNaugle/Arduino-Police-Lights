/*
Police lights using FastLED library 
and an Arduino Uno by Noah Naugle
*/

#include "FastLED.h"
#define COLOR_ORDER GRB
#define LED_TYPE WS2812
#define NUM_LEDS 53
#define NUM_LEDS3 12

CRGBArray<NUM_LEDS> leds1;
CRGBArray<NUM_LEDS> leds2;
CRGBArray<NUM_LEDS3> leds3;
//bottom row led strip arrays are leds1
//top row led strip arrays are leds2
CRGBSet group1(leds1(0,24));
CRGBSet group2(leds1(28,52));

CRGBSet group3(leds2(0,24));
CRGBSet group4(leds2(28,52));

CHSV color1(0,255,255);			//red
CHSV color2(160,255,255);		//blue
CHSV color3(0,0,0);				//black

void setup() {
  
  FastLED.addLeds<WS2812, 5, GRB>(leds1, NUM_LEDS);		//strip1 or bottom row
  FastLED.addLeds<WS2812, 6, GRB>(leds2, NUM_LEDS);		//strip2 or top row
  FastLED.addLeds<WS2812, 7, GRB>(leds3, NUM_LEDS3);	//strip3 or computer lights
  FastLED.setBrightness(255);							//full brightness

}

void loop() {
	for(int x = 0; x < 3; x++) {	//repeat the flash 3 times
		group1 = color1;			//on; off; 3x
		group4 = color1;

		FastLED.show(100);
		delay(50);

		group1 = color3;
		group4 = color3;

		FastLED.show(100);
		delay(50);
	}	
	for(int x = 0; x < 3; x++) {
		group2 = color2;
		group3 = color2;

		FastLED.show(100);
		delay(50);

		group2 = color3;
		group3 = color3;

		FastLED.show(100);
		delay(50);
	}
}