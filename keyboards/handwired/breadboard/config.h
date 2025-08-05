#pragma once

#define EE_HANDS // Store which side I am in EEPROM

/* Keyboard matrix assignments */
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26, GP18, GP20 }
// #define MATRIX_COL_PINS { GP2, GP3, GP4, GP5, GP6, GP7 }

//flip cols pins
#define MATRIX_COL_PINS { GP7, GP6, GP5, GP4, GP3, GP2 }

/* Reset */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
// This LED blinks when entering bootloader

#define MATRIX_ROWS 12
#define MATRIX_COLS 6

#define VIA_PROTOCOL 12
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 4