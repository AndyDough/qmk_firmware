#include QMK_KEYBOARD_H
#include <stdbool.h> // For 'true'
#include "print.h"    // For debug_enable and debug_matrix

enum custom_layers {
    _QWERTY,
};

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = {
        // Left Hand
        { KC_NO,   KC_NO,   KC_2,    KC_3,    KC_4,    KC_5    },
        { KC_TILD, KC_1,    KC_W,    KC_E,    KC_R,    KC_T    },
        { KC_TAB,  KC_Q,    KC_S,    KC_D,    KC_F,    KC_G    },
        { KC_LSFT, KC_A,    KC_X,    KC_C,    KC_V,    KC_B    },
        { KC_NO,   KC_NO,   KC_LBRC, KC_RBRC, KC_NO,   KC_NO   },
        { KC_NO  , KC_Z,    KC_NO,   KC_NO,   KC_NO,   KC_NO   },

        // Right Hand
        { KC_6,    KC_7,    KC_8,    KC_9,    KC_NO,   KC_NO   },
        { KC_Y,    KC_U,    KC_I,    KC_O,    KC_0,    KC_BSPC },
        { KC_H,    KC_J,    KC_K,    KC_L,    KC_P,    KC_MINS },
        { KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SCLN, KC_QUOT },
        { KC_NO,   KC_NO,   KC_PLUS, KC_EQL,  KC_SLSH, KC_BSLS },
        { KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO   }
    }
};
