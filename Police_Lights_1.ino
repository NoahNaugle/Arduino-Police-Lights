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
CRGBSet group1(leds1(0,4));
CRGBSet group2(leds1(10,14));
CRGBSet group3(leds1(20,24));
CRGBSet group4(leds1(33,37));
CRGBSet group5(leds1(43,47));

CRGBSet group6(leds1(5,9));
CRGBSet group7(leds1(15,19));
CRGBSet group8(leds1(28,32));
CRGBSet group9(leds1(38,42));
CRGBSet group10(leds1(48,52));

CRGBSet group11(leds2(0,4));
CRGBSet group12(leds2(10,14));
CRGBSet group13(leds2(20,24));
CRGBSet group14(leds2(33,37));
CRGBSet group15(leds2(43,47));

CRGBSet group16(leds2(5,9));
CRGBSet group17(leds2(15,19));
CRGBSet group18(leds2(28,32));
CRGBSet group19(leds2(38,42));
CRGBSet group20(leds2(48,52));

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
		group1 = color1; 			//on; off; 3x
		group2 = color1;
		group3 = color1;
		group4 = color1; 
		group5 = color1;

		group16 = color1;
		group17 = color1;
		group18 = color1;
		group19 = color1;
		group20 = color1;

		FastLED.show(100);
		delay(50);

		group1 = color3; 
		group2 = color3;
		group3 = color3;
		group4 = color3; 
		group5 = color3;

		group16 = color3;
		group17 = color3;
		group18 = color3;
		group19 = color3;
		group20 = color3;

		FastLED.show();
		delay(50);
	}
	for(int x = 0; x < 3; x++) {
		group6 = color2; 
		group7 = color2;
		group8 = color2;
		group9 = color2; 
		group10 = color2;

		group11 = color2; 
		group12 = color2;
		group13 = color2;
		group14 = color2; 
		group15 = color2;
		FastLED.show(200);
		delay(50);

		group6 = color3; 
		group7 = color3;
		group8 = color3;
		group9 = color3; 
		group10 = color3;

		group11 = color3; 
		group12 = color3;
		group13 = color3;
		group14 = color3; 
		group15 = color3;
		FastLED.show();
		delay(50);
	}
}