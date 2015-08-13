int egyptian_action() {
  rightArm.write(RIGHT_MAX);
  leftArm.write(LEFT_MIN);

  delay(EGYPTIAN_DELAY);

  rightArm.write(RIGHT_MIN);
  leftArm.write(LEFT_MAX);

  delay(EGYPTIAN_DELAY);

  rightArm.write(RIGHT_MAX);
  leftArm.write(LEFT_MIN);

  delay(EGYPTIAN_DELAY);

  arms_down_action();

  return 0;
}
