int raise_arms_action() {
  rightArm.write(DOUBLE_WAVE_PARAMS[0]);
  leftArm.write(DOUBLE_WAVE_PARAMS[2]);

  delay(DOUBLE_WAVE_PARAMS[4]);

  rightArm.write(DOUBLE_WAVE_PARAMS[1]);
  leftArm.write(DOUBLE_WAVE_PARAMS[3]);

  delay(DOUBLE_WAVE_PARAMS[4]);

  rightArm.write(DOUBLE_WAVE_PARAMS[0]);
  leftArm.write(DOUBLE_WAVE_PARAMS[2]);

  return 0;
}
