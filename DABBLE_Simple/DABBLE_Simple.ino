
#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <Dabble.h>
void setup() {

  Serial.begin(250000);
  Dabble.begin(9600);
}

void loop() {
  Dabble.processInput();
  if (GamePad.isUpPressed()) Serial.print("UP");
  if (GamePad.isDownPressed()) Serial.print("DOWN");
  if (GamePad.isLeftPressed()) Serial.print("Left");
  if (GamePad.isRightPressed()) Serial.print("Right");
  if (GamePad.isSquarePressed()) Serial.print("Square");
  if (GamePad.isCirclePressed()) Serial.print("Circle");
  if (GamePad.isCrossPressed()) Serial.print("Cross");
  if (GamePad.isTrianglePressed()) Serial.print("Triangle");
}
