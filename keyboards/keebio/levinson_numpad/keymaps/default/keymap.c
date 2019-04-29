#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _SUPER 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Numpad
 * ,---------------------------.
 * | LOCK | PAUS | PRNT |  ESC |
 * |------+------+------+------|
 * |  /   |   x  | DEL  | BKSP |
 * |------+------+------+------|
 * |  7   |   8  |   9  |   -  |
 * |------+------+------+------|
 * |  4   |   5  |   6  |   +  |
 * |------+------+------+------|
 * |  1   |   2  |   3  |      |
 * |------+------+------| ENT  |
 * |Super |   0  |   .  |      |
 * `---------------------------'
 */
/* Numlock
 * ,---------------------------.
 * | LOCK | PAUS | PRNT |  ESC |
 * |------+------+------+------|
 * |  /   |   x  | DEL  | BKSP |
 * |------+------+------+------|
 * | Home |  Up  | PgUp |   -  |
 * |------+------+------+------|
 * | left |   5  | right|   +  |
 * |------+------+------+------|
 * | end  |   2  | PgDn |      |
 * |------+------+------| ENT  |
 * |Super |  ins |  del |      |
 * `---------------------------'
 */
[_BASE] = LAYOUT_numpad( \
  KC_NLCK,    KC_PAUS, KC_PSCR, KC_ESC,  \
  KC_PSLS,    KC_PAST, KC_DEL,  KC_BSPC, \
  KC_P7,      KC_P8,   KC_P9,   KC_PMNS, \
  KC_P4,      KC_P5,   KC_P6,   KC_PPLS, \
  KC_P1,      KC_P2,   KC_P3,   XXXXXXX, \
  MO(_SUPER), KC_P0,   KC_PDOT, KC_PENT  ),

/* Super
 * ,---------------------------.
 * | LOCK | PAUS | PRNT |  ESC |
 * |------+------+------+------|
 * |      |      | BKSP | DEL  |
 * |------+------+------+------|
 * |      | pgup |  up  |      |
 * |------+------+------+------|
 * |      | left | down | right|
 * |------+------+------+------|
 * |      |pgdown|      |      |
 * |------+------+------| tab  |
 * |Super |      |      |      |
 * `---------------------------'
 */
[_SUPER] = LAYOUT_numpad( \
  _______, XXXXXXX, XXXXXXX, _______, \
  XXXXXXX, XXXXXXX, KC_BSPC, KC_DEL,  \
  XXXXXXX, KC_PGUP, KC_UP,   XXXXXXX, \
  XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, \
  XXXXXXX, KC_PGDN, XXXXXXX, XXXXXXX, \
  _______, XXXXXXX, XXXXXXX, KC_TAB   )
};
