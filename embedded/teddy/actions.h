#include "wave.h"
#include "double_wave.h"
#include "raise_arms.h"

void register_action(std::string name, actionFunc func) {
  actionRegistry[name] = func;
  // Spark.function(name, [&func](String args) -> int {
  //   return func();
  // });
}

void register_actions() {
  register_action("wave", wave_action);
  register_action("double_wave", double_wave_action);
  register_action("raise_arms", raise_arms_action);
  register_action("default", wave_action);
}
