int arms_down_action() {
  rightArm.write(RIGHT_MIN);
  leftArm.write(LEFT_MIN);

  return 0;
}
