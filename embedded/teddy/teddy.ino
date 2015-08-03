#include "application.h"
#include "pins.h"
#include "config.h"

#include "actionRegistry.h"

int buttonState;

Servo leftArm;
Servo rightArm;

#include "actions.h"

void setup() {
  Serial.begin(9600);

  leftArm.attach(LEFT_ARM_PIN);
  rightArm.attach(RIGHT_ARM_PIN);

  Spark.function("trigger", trigger);

  register_actions();
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  if (buttonState != 0) {
    delay(1000);
    trigger("");
  }
}

int trigger(String args) {
  std::map<String, actionFunc>::iterator it;
  it = actionRegistry.find(args);
  if (it == actionRegistry.end()) {
    it = actionRegistry.find("default");
  }
  return it->second();
}
