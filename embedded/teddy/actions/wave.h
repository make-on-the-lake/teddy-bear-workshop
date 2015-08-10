int wave_action() {
  rightArm.write(WAVE_PARAMS[0]);
  delay(WAVE_PARAMS[2]);
  rightArm.write(WAVE_PARAMS[1]);
  delay(WAVE_PARAMS[2]);
  rightArm.write(WAVE_PARAMS[0]);
  return 0;
}
