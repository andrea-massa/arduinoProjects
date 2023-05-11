//www.elegoo.com
//2016.12.8

// Define Pins
#define RED 3
#define GREEN 5
#define BLUE 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, HIGH);
digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int blueValue;
int greenValue;

// main loop
void loop()
{
  #define delayTime 10 // fading time between colors


  redValue = 255; // choose a value between 1 and 255 to change the color.
  greenValue = 0;
  blueValue = 0;

  for(int i = 0; i < 255; i += 1){
    redValue = redValue - 1;
    greenValue = greenValue + 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }


  redValue = 0; // choose a value between 1 and 255 to change the color.
  greenValue = 255;
  blueValue = 0;

  for(int i = 0; i < 255; i += 1){
    greenValue = greenValue - 1;
    blueValue = blueValue + 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }
  

  redValue = 0; // choose a value between 1 and 255 to change the color.
  greenValue = 0;
  blueValue = 255;

  for(int i = 0; i < 255; i += 1){
    blueValue = blueValue - 1;
    redValue = redValue + 1;
    analogWrite(RED, redValue);
    analogWrite(GREEN, greenValue);
    analogWrite(BLUE, blueValue);
    delay(delayTime);
  }
}

