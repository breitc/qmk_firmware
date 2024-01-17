#pragma once

//#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xf007
#define DEVICE_VER      0x0001
#define MANUFACTURER    breitc
#define PRODUCT         Footpedal

/* Define if the pedal is opened when pressed and closed when not */
#define OPEN_ON_PRESS

#define MATRIX_ROWS 1
#define MATRIX_COLS 1
#define DIRECT_PINS { \
    { D0 }, \
}
#define UNUSED_PINS

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
