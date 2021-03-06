#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#undef MOUSEKEY_MOVE_MAX
#define MOUSEKEY_MOVE_MAX       127
#undef MOUSEKEY_WHEEL_MAX
#define MOUSEKEY_WHEEL_MAX      110
#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA     5
#undef MOUSEKEY_WHEEL_DELTA
#define MOUSEKEY_WHEEL_DELTA    1
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY 50
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 20
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 4
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 30
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 3
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1000
#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 500
#undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2

#endif
