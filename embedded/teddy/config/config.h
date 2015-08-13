// Min is when the arm is down
// Max is when the arm is up

#define RIGHT_MIN 80
#define RIGHT_MAX 0

#define LEFT_MIN 80
#define LEFT_MAX 0

#define EGYPTIAN_DELAY 1000

#define STANDARD_DELAY 300

// WAVE_PARAMS
// - Starting and end degree
// - Mid degree
// - Delay (ms)
const int WAVE_PARAMS[] = {RIGHT_MIN, RIGHT_MAX, STANDARD_DELAY};

// WAVE_PARAMS
// - Starting and end degree for right arm
// - Mid degree for right arm
// - Starting and end degree for left arm
// - Mid degree for left arm
// - Delay (ms)
const int DOUBLE_WAVE_PARAMS[] = {RIGHT_MIN, RIGHT_MAX, LEFT_MIN, LEFT_MAX, STANDARD_DELAY};
