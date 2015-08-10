int double_wave_action() {
  wave_action();
  delay(WAVE_PARAMS[2]);
  return wave_action();
}
