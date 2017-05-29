# Arduino-Police-Lights
Police lights setup using WS2812 LEDS and arduino uno 

# Setup
0. x = your specific setup
1. Set NUM_LEDS x   // per strip
2. Set CRGBArray<NUM_LEDS> ledsx; // x per pin/strip/DIN
3. FastLED.addLeds<WS2812, x, GRB>(ledsx, NUM_LEDS); // ledsx is different for every strip or pin input you have

My setup uses one led strip on the bottom and another 2 inches inversed on the top in a rectangular box prism and then another in my pc case, which is 12 leds. The leds in the box follow this format:

# Visualizing the setup/code



leds1 ---------------------->     //bottom strip



leds2 <----------------------     //top strip



leds3 ------->                    //computer case strip




The arrows being the direction of current/data. Meaning that:




leds1 0----------------------52>  //bottom strip



leds2 <52----------------------0  //top strip



leds3 0-------11>                 //computer case strip



The format for the files consists of a array group for better organization. 


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


