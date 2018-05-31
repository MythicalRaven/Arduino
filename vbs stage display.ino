#include "FastLED.h"
#include "Chipsets.h"

//VBS 2017 EFFECTS PROGRAM
//Copyright 2017 Mythical_Raven

//Machine Strip
#define DATA_PIN    6
#define COLOR_ORDER GRB
#define CHIPSET     WS2812B
#define NUM_LEDS   64
#define BRIGHTNESS  200
#define FRAMES_PER_SECOND 60

//Robot eyes
#define ROBOT_DATA_PIN 7
#define ROBOT_COLOR_ORDER GRB
#define ROBOT_CHIPSET WS2812B
#define ROBOT_NUM_LEDS 2
#define ROBOT_BRIGHTNESS 200
#define ROBOT_FRAMES_PER_SECOND 60

//Other Strip
#define DATA_PIN_2 5
#define COLOR_ORDER_2 GRB
#define CHIPSET_2 WS2812B
#define NUM_LEDS_2 30
#define BRIGHTNESS_2 200
#define FRAMES_PER_SECOND_2 60

//4x4 cube 
#define DATA_PIN_4 4
#define COLOR_ORDER_4 GRB
#define CHIPSET_4 WS2812B
#define NUM_LEDS_4 16
#define BRIGHTNESS_4 200
#define FRAMES_PER_SECOND_4 60

// Define the array of leds
CRGB leds[NUM_LEDS];
CRGB leds2[NUM_LEDS_2];
CRGB leds_robot[ROBOT_NUM_LEDS];
CRGB m4[NUM_LEDS_4];
void setup() { 
//Machine Strip
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    FastLED.setBrightness( BRIGHTNESS );
//ROBOT STRIP
  FastLED.addLeds<ROBOT_CHIPSET, ROBOT_DATA_PIN, ROBOT_COLOR_ORDER>(leds_robot, ROBOT_NUM_LEDS).setCorrection(TypicalLEDStrip);
    FastLED.setBrightness(ROBOT_BRIGHTNESS);
//OTHER Strip
  FastLED.addLeds<CHIPSET_2, DATA_PIN_2, COLOR_ORDER_2>(leds2, NUM_LEDS_2).setCorrection(TypicalLEDStrip);
    FastLED.setBrightness(BRIGHTNESS_2);
//4x4 
FastLED.addLeds<CHIPSET_4, DATA_PIN_4, COLOR_ORDER_4>(m4, NUM_LEDS_4).setCorrection(TypicalLEDStrip);
FastLED.setBrightness(BRIGHTNESS_4);
}

void loop() { 
// Layer 1
  leds[0] = CRGB::Red ;
  leds2[0]=CRGB::Blue ;
  leds_robot[0] =CRGB::Green ;
//Red X Blue Circle 
 m4[0]=CRGB::Red ;
  m4[1]=CRGB::Blue ;
  m4[2]=CRGB::Blue ;
  m4[3]=CRGB::Red ;
  m4[4]=CRGB::Blue ;
  m4[5]=CRGB::Red ;
  m4[6]=CRGB::Red ;
  m4[7]=CRGB::Blue ;
  m4[8]=CRGB::Blue ;
  m4[9]=CRGB::Red ;
  m4[10]=CRGB::Red ;
  m4[11]=CRGB::Blue ;
  m4[12]=CRGB::Red ;
  m4[13]=CRGB::Blue ;
  m4[14]=CRGB::Blue ;
  m4[15]=CRGB::Red ;
  FastLED.show();
  delay(500);  
  leds[1] = CRGB::Red;
  leds_robot[0] =CRGB::Blue ;
  leds2[29]=CRGB::Teal ;
  //Blue X Red Circle
  m4[0]=CRGB::Blue ;
  m4[1]=CRGB::Red ;
  m4[2]=CRGB::Red ;
  m4[3]=CRGB::Blue ;
  m4[4]=CRGB::Red ;
  m4[5]=CRGB::Blue ;
  m4[6]=CRGB::Blue ;
  m4[7]=CRGB::Red ;
  m4[8]=CRGB::Red ;
  m4[9]=CRGB::Blue ;
  m4[10]=CRGB::Blue ;
  m4[11]=CRGB::Red ;
  m4[12]=CRGB::Blue ;
  m4[13]=CRGB::Red ;
  m4[14]=CRGB::Red ;
  m4[15]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  leds[2] = CRGB::Red ;
  leds_robot[0]=CRGB::Green ;
  //Red X Blue Circle 
 m4[0]=CRGB::Red ;
  m4[1]=CRGB::Blue ;
  m4[2]=CRGB::Blue ;
  m4[3]=CRGB::Red ;
  m4[4]=CRGB::Blue ;
  m4[5]=CRGB::Red ;
  m4[6]=CRGB::Red ;
  m4[7]=CRGB::Blue ;
  m4[8]=CRGB::Blue ;
  m4[9]=CRGB::Red ;
  m4[10]=CRGB::Red ;
  m4[11]=CRGB::Blue ;
  m4[12]=CRGB::Red ;
  m4[13]=CRGB::Blue ;
  m4[14]=CRGB::Blue ;
  m4[15]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[3] = CRGB::Red ;
  leds_robot[0] =CRGB::Blue ;
  //Blue X Red Circle
  m4[0]=CRGB::Blue ;
  m4[1]=CRGB::Red ;
  m4[2]=CRGB::Red ;
  m4[3]=CRGB::Blue ;
  m4[4]=CRGB::Red ;
  m4[5]=CRGB::Blue ;
  m4[6]=CRGB::Blue ;
  m4[7]=CRGB::Red ;
  m4[8]=CRGB::Red ;
  m4[9]=CRGB::Blue ;
  m4[10]=CRGB::Blue ;
  m4[11]=CRGB::Red ;
  m4[12]=CRGB::Blue ;
  m4[13]=CRGB::Red ;
  m4[14]=CRGB::Red ;
  m4[15]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  leds[4] = CRGB::Red ;
  leds_robot[0]=CRGB::Green ;
  //Red X Blue Circle 
 m4[0]=CRGB::Red ;
  m4[1]=CRGB::Blue ;
  m4[2]=CRGB::Blue ;
  m4[3]=CRGB::Red ;
  m4[4]=CRGB::Blue ;
  m4[5]=CRGB::Red ;
  m4[6]=CRGB::Red ;
  m4[7]=CRGB::Blue ;
  m4[8]=CRGB::Blue ;
  m4[9]=CRGB::Red ;
  m4[10]=CRGB::Red ;
  m4[11]=CRGB::Blue ;
  m4[12]=CRGB::Red ;
  m4[13]=CRGB::Blue ;
  m4[14]=CRGB::Blue ;
  m4[15]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[5] = CRGB::Red ;
  leds_robot[0] =CRGB::Blue ;
  //Blue X Red Circle
  m4[0]=CRGB::Blue ;
  m4[1]=CRGB::Red ;
  m4[2]=CRGB::Red ;
  m4[3]=CRGB::Blue ;
  m4[4]=CRGB::Red ;
  m4[5]=CRGB::Blue ;
  m4[6]=CRGB::Blue ;
  m4[7]=CRGB::Red ;
  m4[8]=CRGB::Red ;
  m4[9]=CRGB::Blue ;
  m4[10]=CRGB::Blue ;
  m4[11]=CRGB::Red ;
  m4[12]=CRGB::Blue ;
  m4[13]=CRGB::Red ;
  m4[14]=CRGB::Red ;
  m4[15]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  leds[6] =CRGB::Red ;
  leds_robot[0]=CRGB::Green ;
  //Red X Blue Circle 
 m4[0]=CRGB::Red ;
  m4[1]=CRGB::Blue ;
  m4[2]=CRGB::Blue ;
  m4[3]=CRGB::Red ;
  m4[4]=CRGB::Blue ;
  m4[5]=CRGB::Red ;
  m4[6]=CRGB::Red ;
  m4[7]=CRGB::Blue ;
  m4[8]=CRGB::Blue ;
  m4[9]=CRGB::Red ;
  m4[10]=CRGB::Red ;
  m4[11]=CRGB::Blue ;
  m4[12]=CRGB::Red ;
  m4[13]=CRGB::Blue ;
  m4[14]=CRGB::Blue ;
  m4[15]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[7] = CRGB::Red ;
  leds_robot[0] =CRGB::Blue ;
  //Blue X Red Circle
  m4[0]=CRGB::Blue ;
  m4[1]=CRGB::Red ;
  m4[2]=CRGB::Red ;
  m4[3]=CRGB::Blue ;
  m4[4]=CRGB::Red ;
  m4[5]=CRGB::Blue ;
  m4[6]=CRGB::Blue ;
  m4[7]=CRGB::Red ;
  m4[8]=CRGB::Red ;
  m4[9]=CRGB::Blue ;
  m4[10]=CRGB::Blue ;
  m4[11]=CRGB::Red ;
  m4[12]=CRGB::Blue ;
  m4[13]=CRGB::Red ;
  m4[14]=CRGB::Red ;
  m4[15]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  
//Layer 2
  leds[0] = CRGB::Green ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);  
  leds[1] = CRGB::Green ;
  leds_robot[0]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  leds[2] = CRGB::Green ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[3] = CRGB::Green ;
  leds_robot[0]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  leds[4] = CRGB::Green ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[5] = CRGB::Green ;
  leds_robot[0]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  leds[6] =CRGB::Green ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[7] = CRGB::Green ;
  leds_robot[0]=CRGB::Blue ;
  FastLED.show();
  delay(500);
  
//Layer 3
  leds[0] = CRGB::Blue ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);  
  leds[1] = CRGB::Blue ;
  leds_robot[0]=CRGB::Green ;
  FastLED.show();
  delay(500);
  leds[2] = CRGB::Blue ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[3] = CRGB::Blue ;
  leds_robot[0]=CRGB::Green ;
  FastLED.show();
  delay(500);
  leds[4] = CRGB::Blue ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[5] = CRGB::Blue ;
  leds_robot[0]=CRGB::Green ;
  FastLED.show();
  delay(500);
  leds[6] =CRGB::Blue ;
  leds_robot[0]=CRGB::Red ;
  FastLED.show();
  delay(500);
  leds[7] = CRGB::Blue ;
  leds_robot[0]=CRGB::Green ;
  FastLED.show();
  delay(500);
}
