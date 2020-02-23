#include "DigiKeyboard.h"

int ledState = LOW;
unsigned long previousMillis = 0;

const long interval = 2000;
const int upPin = 1;
const int downPin = 0;

void setup() {
  pinMode(upPin, INPUT);
  pinMode(downPin, INPUT);

  //DigiMouse.begin();
}

void loop() {

  //DigiMouse.update();
  
  int pushState = digitalRead(upPin);
  int pullState = digitalRead(downPin);
  
  if (pullState == HIGH){
    DigiKeyboard.sendKeyPress(KEY_SPACE);
  }
  else if (pushState == HIGH){
    DigiKeyboard.sendKeyPress(KEY_ENTER);
  }
  else {
    DigiKeyboard.sendKeyPress(0,0);
  }

//  if (now - previousMillis >= interval) {
//    previousMillis = now;
//
//    if (ledState == LOW) {
//      ledState = HIGH;
//      DigiMouse.setButtons(1<<0); //left click
//      DigiMouse.delay(500);
//      DigiMouse.setButtons(0); //unclick all
//      DigiMouse.delay(500);
//    } else {
//      ledState = LOW;
//    }
// }

}
