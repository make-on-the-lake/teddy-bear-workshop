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

  Spark.function("setl", set_left_arm);
  Spark.function("setr", set_right_arm);

  register_actions();
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  if (buttonState != 0) {
    delay(1000);
    trigger("");
  }
}

// tuning

int set_left_arm(String args) {
  int degs = args.toInt();
  leftArm.write(degs);
  return 0;
}

int set_right_arm(String args) {
  int degs = args.toInt();
  rightArm.write(degs);
  return 0;
}

int trigger(String args) {
  std::map<std::string, actionFunc>::iterator it;
  it = actionRegistry.find(args.c_str());
  if (it == actionRegistry.end()) {
    it = actionRegistry.find("default");
  }
  return it->second();
}
