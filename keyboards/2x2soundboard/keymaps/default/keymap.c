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
#include "2x2soundboard.h"

// Defines names for use in layer keycodes and the keymap
// enum layer_names {};

// Defines the keycodes used by our macros in process_record_user
// enum custom_keycodes {};

enum {
    TD_F20_F21 = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_F20_F21] = ACTION_TAP_DANCE_DOUBLE(KC_F20, KC_F21)
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
        KC_F18, KC_F19,
        KC_F20, TD(TD_F20_F21)
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
