# Arduino-Police-Lights
Police lights setup using WS2812 LEDS and arduino uno 

If you want to see how I built the wooden part or the enclosure, check out the imgur album:

https://imgur.com/a/3wvBW

# Setup

Change x to how many leds you have per strip

Below I have two defined for 53 and 12
```c++
#define COLOR_ORDER GRB
#define LED_TYPE WS2812
#define NUM_LEDS x
#define NUM_LEDS3 x
```
This might look like a lot at first, but it's actually very organized(beginner friendly). Police light bars usually have segments that change at a time on a delay and flash a certain amount of times. The following is a grouped setup for 1 continous leds strip = leds1(53), leds2(53) and leds3(12)

leds1 starts at 0-52 index values, and leds2 starts at 52-0. For my setup I have a DIN connection to the arduino on the opposite side of the first strip, which is why the leds2 strip index is inversed.

```c++
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
```

For example,

group1 and group2 (index values)
```c++
0 1 2 3 4 | 5 6 7 8 9 | //leds1
```
group11 and group12
```c++
9 8 7 6 5 | 4 3 2 1 | //leds2
```
group21 and group22
```c++
0 | 1 //leds3
```

This makes it easy to sync up all the 3 led strips

If it still seems confusing heres a simple visual aid:
# Visualizing the setup/code
The arrows are the direction of current/data


leds1 0----------------------52>  //bottom strip



leds2 <52----------------------0  //top strip



leds3 0-------11>                 //computer case strip



For example:

```c++
CRGBSet group11(leds1(48,52));
```

Above is an array of leds from index(48-52) on leds1, which is strip 1. The group 11 makes it easy to call that array of leds in the void loop().

```c++
group11 = color3;
```

group 11 now can be changed to any color, in this case color3 = to black


Which is this value: 
```c++
CHSV color3(0,0,0);	
```
All together it looks like this: 
```c++
void loop() {
	for(int x = 0; x < 3; x++) {	//repeat the flash 3 times, makes it look real, change to preference
    		/* being able to set each group to red or blue also gives the simple opportunity 
    		if you want to change the color to a different shade on the fly*/
    		group1 = color1;      //set group1 = red
    		group11 = color1;     //set group11 = red
    		group21 = color1;     //set group21 = red
    
    		FastLED.show(100);    //show and delay
    		delay(50);
    
    		group11 = color3;     //set group1 = black
    		group11 = color3;     //set group11 = black
    		group11 = color3;     //set group21 = black
    
    		FastLED.show(100);    //show and delay
    		delay(50);
    		/*except this is an endless flash of red ;)
    		Check out the sketchs and have fun creating your own!*/
    	}
}
```

After all the setup, you can easily set each group and set their color to create some unique police patterns! Here is a visual of each I have created so far: 


![](https://media.giphy.com/media/nyguypI9Av612/giphy.gif)

![](https://media.giphy.com/media/YJk4QGRT5AYXS/giphy.gif)

![](https://media.giphy.com/media/12Hz5eSxVqaM7u/giphy.gif)

![](https://media.giphy.com/media/wwuef0iExHFO8/giphy.gif)

![](https://media.giphy.com/media/Xzjr10xTYdrws/giphy.gif)

![](https://media.giphy.com/media/olWZtQJcAoNgs/giphy.gif)

![](https://media.giphy.com/media/rLmfcwQ7zlEA0/giphy.gif)

