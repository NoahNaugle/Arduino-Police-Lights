# Arduino-Police-Lights
Police lights setup using WS2812 LEDS and arduino uno 

# Setup
0. x = your specific setup
1. Check what COLOR_ORDER your led strip is mine is GRB
2. Set NUM_LEDS x   // per strip
3. Set CRGB ledsx[NUM_LEDS]; // x per pin
4. FastLED.addLeds<NEOPIXEL, x>(ledsx, NUM_LEDS); // ledsx is different for every strip or pin input you have

My setup uses one led strip on the bottom and another 2 inches inversed in a rectangular box prism and then another in my pc case, which is 12 leds. The leds in the box follow this format:

# Visualizing the setup/code



leds1 ---------------------->     //bottom strip



leds2 <----------------------     //top strip



leds3 ------->                    //computer case strip




The arrows being the direction of current/data. Meaning that:




leds1 0----------------------52>  //bottom strip



leds2 <52----------------------0  //top strip



leds3 0-------11>                 //computer case strip



# Conclusion

I found out that the easiest way for me to solve my problem, was to hardcode/copy/paste the answer. Following these simple steps you can do it yourself for your specific setup. Reference to the code for your specific needs. I'll be adding new additions to my setup over time. 



