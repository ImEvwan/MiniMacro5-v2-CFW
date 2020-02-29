#include QMK_KEYBOARD_H

#define _BASE 0
#define _SECOND 1 

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_ortho_1x5(
    KC_A, KC_B, KC_C, KC_D, LT(_SECOND, KC_E) //I'm going to change this layer to have DEL, F1, Enter, F12, TG
  ),
  [_SECOND] = LAYOUT_ortho_1x5(
    KC_F, KC_G, KC_H, KC_I, KC_J //This layer will just be arrow keys and TG
  ),
};