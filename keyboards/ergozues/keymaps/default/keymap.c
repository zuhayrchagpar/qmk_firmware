/* Copyright 2020 Zuhayr Chagpar
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "ergozues.h"

// Defines names for use in layer keycodes and the keymap
enum layer_names {
  BASE,
  SYMB,
  MDIA
};

// Defines the keycodes used by our macros in process_record_user
// enum custom_keycodes {};


    // KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    // KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    // KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                              KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    // KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    // KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
    //                                                   KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,
    //                                                             KC_TRNS,          KC_TRNS,
    //                                         KC_TRNS,  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = KEYMAP(
    KC_EQL,           KC_1,         KC_2,           KC_3,     KC_4,       KC_5,           KC_LEFT,              KC_RIGHT,     KC_6,           KC_7,     KC_8,     KC_9,     KC_0,             KC_MINS,
    KC_DEL,           KC_Q,         KC_W,           KC_E,     KC_R,       KC_T,           TG(SYMB),             TG(SYMB),     KC_Y,           KC_U,     KC_I,     KC_O,     KC_P,             KC_BSLS,
    KC_BSPC,          KC_A,         KC_S,           KC_D,     KC_F,       KC_G,                                               KC_H,           KC_J,     KC_K,     KC_L,     LT(MDIA,KC_SCLN), GUI_T(KC_QUOT),
    KC_LSFT,          CTL_T(KC_Z),  KC_X,           KC_C,     KC_V,       KC_B,           ALL_T(KC_NO),         MEH_T(KC_NO), KC_N,           KC_M,     KC_COMM,  KC_DOT,   CTL_T(KC_SLSH),   KC_RSFT,
    LT(SYMB,KC_GRV),  KC_QUOT,      LALT(KC_LSFT),  KC_LEFT,  KC_RIGHT,                                                                       KC_UP,    KC_DOWN,  KC_LBRC,  KC_RBRC,          TT(SYMB),
                                                                          ALT_T(KC_APP),  KC_LGUI,              KC_LALT,      CTL_T(KC_ESC),
                                                                                          KC_HOME,              KC_PGUP,
                                                              KC_SPC,     KC_TAB,         KC_END,               KC_PGDN,      KC_ENT,         KC_BSPC
  ),



  [SYMB] = KEYMAP(
    KC_TRNS,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_TRNS,           KC_TRNS, KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,     KC_F11,
    KC_TRNS,  KC_EXLM,  KC_AT,    KC_LCBR,  KC_RCBR,  KC_PIPE,  KC_TRNS,           KC_TRNS, KC_UP,    KC_KP_7,  KC_KP_8,  KC_KP_9,  KC_ASTR,    KC_F12,
    KC_TRNS,  KC_HASH,  KC_DLR,   KC_LPRN,  KC_RPRN,  KC_GRV,                               KC_DOWN,  KC_KP_4,  KC_KP_5,  KC_KP_6,  KC_PLUS,    KC_PAUS,
    KC_TRNS,  KC_PERC,  KC_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,  KC_TRNS,           KC_TRNS, KC_AMPR,  KC_KP_1,  KC_KP_2,  KC_KP_3,  KC_BSLS,    KC_SLCK,
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                                                  KC_TRNS,  KC_TRNS,  KC_KP_0,  KC_KP_DOT,  KC_TRNS,
                                                      KC_TRNS,  KC_TRNS,           KC_TRNS, KC_TRNS,
                                                                KC_TRNS,           KC_TRNS,
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,           KC_TRNS, KC_TRNS,KC_TRNS
  ),

  [MDIA] = KEYMAP(
    RESET,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,
    KC_TRNS,  S(KC_F13),  S(KC_F14),  S(KC_F15),  S(KC_F16),  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,       KC_TRNS,  KC_TRNS,
    KC_TRNS,  S(KC_F17),  S(KC_F18),  S(KC_F19),  S(KC_F20),  KC_TRNS,                              KC_TRNS,  KC_TRNS,  KC_TRNS,  CTL_T(KC_NO),  KC_TRNS,  KC_MPLY,
    KC_TRNS,  S(KC_F21),  S(KC_F22),  S(KC_F23),  S(KC_F24),  KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MPRV,  KC_MNXT,       KC_TRNS,  KC_TRNS,
    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,                                                    KC_VOLU,  KC_VOLD,  KC_MUTE,       KC_TRNS,  KC_TRNS,
                                                              KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,
                                                                        KC_TRNS,          KC_TRNS,
                                                  KC_TRNS,    KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
