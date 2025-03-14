/* Copyright 2020 imchipwood
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
#include <stdbool.h>

// For toggling the middle LED
bool led_01_toggle = false;

enum custom_keycodes {
    KEY_0 = SAFE_RANGE,
    KEY_1,
    KEY_2,
    KEY_3,
    KEY_4,
    KEY_5,
    KEY_6,
    KEY_7,
    KEY_8,
    KEY_9,
    KEY_10,
    KEY_11,
    KEY_12,
    KEY_13,
    KEY_14,
    KEY_15,
    KEY_16
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KEY_0:
        if (record->event.pressed) {
            // when keycode KEY_0 is pressed
            register_code(KC_F13);
        } else {
            // when keycode KEY_0 is released
            unregister_code(KC_F13);
        }
        break;
    case KEY_1:
        if (record->event.pressed) {
            // when keycode KEY_1 is pressed
            register_code(KC_F14);
        } else {
            // when keycode KEY_1 is released
            unregister_code(KC_F14);
        }
        break;
    case KEY_2:
        if (record->event.pressed) {
            // when keycode KEY_2 is pressed
            register_code(KC_F15);
        } else {
            // when keycode KEY_2 is released
            unregister_code(KC_F15);
        }
        break;
    case KEY_3:
        if (record->event.pressed) {
            // when keycode KEY_3 is pressed
            register_code(KC_F16);
        } else {
            // when keycode KEY_3 is released
            unregister_code(KC_F16);
        }
        break;
    case KEY_4:
        if (record->event.pressed) {
            // when keycode KEY_4 is pressed
            register_code(KC_F17);
        } else {
            // when keycode KEY_4 is released
            unregister_code(KC_F17);
        }
        break;
    case KEY_5:
        if (record->event.pressed) {
            // when keycode KEY_5 is pressed
            register_code(KC_F18);
        } else {
            // when keycode KEY_5 is released
            unregister_code(KC_F18);
        }
        break;
    case KEY_6:
        if (record->event.pressed) {
            // when keycode KEY_6 is pressed
            register_code(KC_F19);
        } else {
            // when keycode KEY_6 is released
            unregister_code(KC_F19);
        }
        break;
    case KEY_7:
        if (record->event.pressed) {
            // when keycode KEY_7 is pressed
            register_code(KC_F20);
        } else {
            // when keycode KEY_7 is released
            unregister_code(KC_F20);
        }
        break;
    case KEY_8:
        if (record->event.pressed) {
            // when keycode KEY_8 is pressed
            register_code(KC_F20);
        } else {
            // when keycode KEY_8 is released
            unregister_code(KC_F20);
        }
        break;
    case KEY_9:
        if (record->event.pressed) {
            // when keycode KEY_9 is pressed
            register_code(KC_F21);
        } else {
            // when keycode KEY_9 is released
            unregister_code(KC_F21);
        }
        break;
    case KEY_10:
        if (record->event.pressed) {
            // when keycode KEY_10 is pressed
            register_code(KC_F22);
        } else {
            // when keycode KEY_10 is released
            unregister_code(KC_F22);
        }
        break;
    case KEY_11:
        if (record->event.pressed) {
            // when keycode KEY_11 is pressed
            register_code(KC_F23);
        } else {
            // when keycode KEY_11 is released
            unregister_code(KC_F23);
        }
        break;
    case KEY_12:
        if (record->event.pressed) {
            // when keycode KEY_12 is pressed
            register_code(KC_MPLY);
        } else {
            // when keycode KEY_12 is released
            unregister_code(KC_MPLY);
        }
        break;
    case KEY_13:
        if (record->event.pressed) {
            // when keycode KEY_13 is pressed
            register_code(KC_LCTL);
            register_code(KC_LALT);
            register_code(KC_LSFT);
            register_code(KC_P3);
        } else {
            // when keycode KEY_13 is released
            unregister_code(KC_LCTL);
            unregister_code(KC_LALT);
            unregister_code(KC_LSFT);
            unregister_code(KC_P3);
        }
        break;
    case KEY_14:
        if (record->event.pressed) {
            // when keycode KEY_14 is pressed
            register_code(KC_LCTL);
            register_code(KC_LALT);
            register_code(KC_LSFT);
            register_code(KC_P4);
        } else {
            // when keycode KEY_14 is released
            unregister_code(KC_LCTL);
            unregister_code(KC_LALT);
            unregister_code(KC_LSFT);
            unregister_code(KC_P4);
        }
        break;
    case KEY_15:
        if (record->event.pressed) {
            // when keycode KEY_15 is pressed
            register_code(KC_LCTL);
            register_code(KC_LALT);
            register_code(KC_LSFT);
            register_code(KC_P5);
        } else {
            // when keycode KEY_15 is released
            unregister_code(KC_LCTL);
            unregister_code(KC_LALT);
            unregister_code(KC_LSFT);
            unregister_code(KC_P5);
        }
        break;
    case KEY_16:
        if (record->event.pressed) {
            // when keycode KEY_16 is pressed

             // Logic for toggling the middle LED
            if (led_01_toggle){
                writePinLow(LED_01);
                led_01_toggle = false;
            }
            else {
                writePinHigh(LED_01);
                led_01_toggle = true;
            }

            register_code(KC_F24);
        } else {
            // when keycode KEY_16 is released
            unregister_code(KC_F24);
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
            BASE LAYER
    /-----------------------------------------------------`
    |             |  KEY_12 | KC_MPRV | KC_MNXT |  TO(1)  |
    |             |---------|---------|---------|---------|
    |             |  KEY_8  |  KEY_9  |  KEY_10 |  KEY_11 |
    |             |---------|---------|---------|---------|
    |             |  KEY_4  |  KEY_5  |  KEY_6  |  KEY_7  |
    |-------------|---------|---------|---------|---------|
    |   KEY_16    |  KEY_0  |  KEY_1  |  KEY_2  |  KEY_3  |
    \-----------------------------------------------------'
    */
    [0] = LAYOUT(
                     KEY_12,    KC_MPRV,   KC_MNXT,   TO(1),
                     KEY_8,     KEY_9,    KEY_10,   KEY_11,
                     KEY_4,     KEY_5,    KEY_6,    KEY_7,
        KEY_16,      KEY_0,     KEY_1,    KEY_2,    KEY_3
    ),
    /*
            SUB LAYER
    /-----------------------------------------------------`
    |             |         |         |         |  TO(0)  |
    |             |---------|---------|---------|---------|
    |             |         |         |         |         |
    |             |---------|---------|---------|---------|
    |             |         |         |         |         |
    |-------------|---------|---------|---------|---------|
    |     KC_1    |         |         |         |         |
    \-----------------------------------------------------'
    */
    [1] = LAYOUT(
                    _______,     _______,     _______,      TO(0),
                    _______,     _______,     _______,      _______,
                    _______,     _______,     _______,      _______,
        KC_1,       _______,     _______,     _______,      _______
    ),
};

void keyboard_post_init_user(void) {
    // Customise these values to desired behaviour
    // debug_enable = true;
    // debug_matrix = true;
    // debug_keyboard = true;
    // debug_mouse = true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    /*  Custom encoder control - handles CW/CCW turning of encoder
     *  Default behavior:
     *    left encoder:
     *      main layer:
     *         CW: move mouse right
     *        CCW: move mouse left
     *      other layers:
     *         CW: = (equals/plus - increase slider in Adobe products)
     *        CCW: - (minus/underscore - decrease slider in adobe products)
     *    right encoder:
     *      main layer:
     *         CW: colume up
     *        CCW: volume down
     *      other layers:
     *         CW: right arrow
     *        CCW: left arrow
     */
    if (index == 0) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - move mouse right (CW) and left (CCW)
                if (clockwise) {
                    tap_code(KC_VOLU);
                } else {
                    tap_code(KC_VOLD);
                }
                break;

            case 1:
                // other layers - =/+ (quals/plus) (CW) and -/_ (minus/underscore) (CCW)
                if (clockwise) {
                    tap_code(KC_EQL);
                } else {
                    tap_code(KC_MINS);
                }
                break;
        }
    } else if (index == 1) {
        switch (get_highest_layer(layer_state)) {
            case 0:
                // main layer - scrolling through search results
                if (clockwise) {
                    tap_code(KC_F3);
                } else {
                    tap_code16(S(KC_F3));
                }
                break;

            case 1:
                // other layers - right (CW) and left (CCW)
                if (clockwise) {
                    tap_code(KC_PGDN);
                } else {
                    tap_code(KC_PGUP);
                }
                break;
        }
    }
    return true;
}
