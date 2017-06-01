/*
Police lights using FastLED library 
and an Arduino Uno by Noah Naugle
*/

#define FASTLED_INTERNAL
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
CRGBSet group2(leds1(5,9));
CRGBSet group3(leds1(10,14));
CRGBSet group4(leds1(15,19));
CRGBSet group5(leds1(20,24));
CRGBSet group6(leds1(28,32));
CRGBSet group7(leds1(33,37));
CRGBSet group8(leds1(38,42));
CRGBSet group9(leds1(43,47));
CRGBSet group10(leds1(48,52));

CRGBSet group11(leds2(48,52));
CRGBSet group12(leds2(43,47));
CRGBSet group13(leds2(38,42));
CRGBSet group14(leds2(33,37));
CRGBSet group15(leds2(28,32));
CRGBSet group16(leds2(20,24));
CRGBSet group17(leds2(15,19));
CRGBSet group18(leds2(10,14));
CRGBSet group19(leds2(5,9));
CRGBSet group20(leds2(0,4));

CRGBSet group21(leds3(0,0));
CRGBSet group22(leds3(1,1));
CRGBSet group23(leds3(2,2));
CRGBSet group24(leds3(3,3));
CRGBSet group25(leds3(4,4));
CRGBSet group26(leds3(7,7));
CRGBSet group27(leds3(8,8));
CRGBSet group28(leds3(9,9));
CRGBSet group29(leds3(10,10));
CRGBSet group30(leds3(11,11));

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
	for(int x = 0; x < 3; x++) {
		group2 = color1;
		group12 = color1;
		group22 = color1;
		group3 = color2;
		group13 = color2;
		group23 = color2;
		group7 = color1;
		group17 = color1;
		group27 = color1;
		group8 = color2;
		group18 = color2;
		group28 = color2;

		FastLED.show(100);
		delay(30);

		group2 = color3;
		group12 = color3;
		group22 = color3;
		group3 = color3;
		group13 = color3;
		group23 = color3;
		group7 = color3;
		group17 = color3;
		group27 = color3;
		group8 = color3;
		group18 = color3;
		group28 = color3;

		FastLED.show(100);
		delay(30);
	}
	for(int x = 0; x < 3; x++) {
		group1 = color2;
		group11 = color2;
		group21 = color2;
		group3 = color1;
		group13 = color1;
		group23 = color1;
		group5 = color1;
		group15 = color1;
		group25 = color1;
		group6 = color2;
		group16 = color2;
		group26 = color2;
		group9 = color1;
		group19 = color1;
		group29 = color1;
		group10 = color2;
		group20 = color2;
		group30 = color2;

		FastLED.show(100);
		delay(10);

		group1 = color3;
		group11 = color3;
		group21 = color3;
		group3 = color3;
		group13 = color3;
		group23 = color3;
		group5 = color3;
		group15 = color3;
		group25 = color3;
		group6 = color3;
		group16 = color3;
		group26 = color3;
		group9 = color3;
		group19 = color3;
		group29 = color3;
		group10 = color3;
		group20 = color3;
		group30 = color3;

		FastLED.show(100);
		delay(10);
	}
	for(int x = 0; x < 3; x++) {
		group2 = color2;
		group12 = color2;
		group22 = color2;
		group4 = color1;
		group14 = color1;
		group24 = color1;
		group5 = color2;
		group15 = color2;
		group25 = color2;
		group7 = color2;
		group17 = color2;
		group27 = color2;
		group10 = color1;
		group20 = color1;
		group30 = color1;

		FastLED.show(100);
		delay(30);

		group2 = color3;
		group12 = color3;
		group22 = color3;
		group4 = color3;
		group14 = color3;
		group24 = color3;
		group5 = color3;
		group15 = color3;
		group25 = color3;
		group7 = color3;
		group17 = color3;
		group27 = color3;
		group10 = color3;
		group20 = color3;
		group30 = color3;

		FastLED.show(100);
		delay(30);
	}
	for(int x = 0; x < 3; x++) {
		group1 = color2;
		group11 = color2;
		group21 = color2;
		group3 = color1;
		group13 = color1;
		group23 = color1;
		group5 = color1;
		group15 = color1;
		group25 = color1;
		group6 = color1;
		group16 = color1;
		group26 = color1;
		group8 = color1;
		group18 = color1;
		group28 = color1;
		group9 = color2;
		group19 = color2;
		group29 = color2;

		FastLED.show(100);
		delay(10);

		group1 = color3;
		group11 = color3;
		group21 = color3;
		group3 = color3;
		group13 = color3;
		group23 = color3;
		group5 = color3;
		group15 = color3;
		group25 = color3;
		group6 = color3;
		group16 = color3;
		group26 = color3;
		group8 = color3;
		group18 = color3;
		group28 = color3;
		group9 = color3;
		group19 = color3;
		group29 = color3;

		FastLED.show(100);
		delay(10);
	}
}
