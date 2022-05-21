/* Copyright 2022 joshajohnson, riotpunch
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _COLEMAK,
    _QWERTY,
    _FN,
    _CTRL
};

// LED control
uint8_t status_en = 1;

/* Jiggler */
// static uint32_t key_timer = 0;
// static bool dir = true;
// static bool en = false;

// Custom Keycodes
enum custom_codes{
    STAT_EN = SAFE_RANGE,
    UNDER_EN,
    JIGGLER
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_COLEMAK] = LAYOUT_all(
      _______, _______, _______, _______,   KC_ESC,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,     KC_F11,         KC_F12,             KC_DEL,  KC_MUTE, \
      KC_PMNS, KC_PAST, KC_PSLS,  KC_NUM,       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL, _______,   KC_BSPC,KC_INSERT, \
      KC_PPLS,   KC_P7,   KC_P8,   KC_P9,      KC_TAB,       KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y, KC_SCLN,  KC_LBRC,      KC_RBRC,   KC_BSLS,             KC_PGUP, \
      _______,   KC_P4,   KC_P5,   KC_P6,    KC_BSPC,           KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O, KC_QUOT,                KC_ENT,             KC_PGDN, \
      KC_PENT,   KC_P1,   KC_P2,   KC_P3,   KC_LSFT, _______,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_K,    KC_M,     KC_COMM, KC_DOT, KC_SLSH,           KC_RSFT,    KC_UP,           \
      _______, KC_PDOT, _______,   KC_P0,        KC_LCTL,      KC_LGUI,      KC_LALT,      MO(_FN), KC_SPC,    _______,  KC_SPC,           KC_RALT,         MO(_CTRL),         KC_LEFT,  KC_DOWN,  KC_RGHT
),
[_QWERTY] = LAYOUT_all(
      _______, _______, _______, _______,   KC_ESC,       KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,     KC_F11,         KC_F12,             KC_DEL,  KC_MUTE, \
    KC_PMNS,   KC_PAST, KC_PSLS,  KC_NUM,       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,         KC_EQL, _______,   KC_BSPC,KC_INSERT, \
    KC_PPLS,     KC_P7,   KC_P8,   KC_P9,      KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,  KC_LBRC,        KC_RBRC, KC_BSLS,             KC_HOME, \
    _______,     KC_P4,   KC_P5,   KC_P6,    KC_CAPS,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,       KC_ENT,                       KC_END, \
    KC_PENT,     KC_P1,   KC_P2,   KC_P3,   KC_LSFT, _______,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,     KC_COMM, KC_DOT, KC_SLSH,           KC_RSFT,    KC_UP,           \
      _______, KC_PDOT, _______,   KC_P0,        KC_LCTL,      KC_LGUI,      KC_LALT,      KC_SPC, MO(_CTRL),  _______,  KC_SPC,           KC_RALT,         KC_RCTL,           KC_LEFT,  KC_DOWN,  KC_RGHT
),
[_FN] = LAYOUT_all(
    _______,  _______,  _______, _______,  _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,     _______,            _______,  _______,   \
    _______,  _______,  _______, KC_CAPS,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______,   _______,  _______,   \
    _______,  _______,  _______, _______,     _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,   _______,             \
    _______,  _______,  _______, _______,     KC_DEL,        KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT,  KC_MPLY,  KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______,      _______,         _______,             \
    _______,  _______,  _______, _______,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,   _______,             \
    _______,  _______,  _______, _______,  _______, _______,                     _______, _______, _______,             _______, _______, _______,      _______,             _______, _______, _______
),
[_CTRL] = LAYOUT_all(
    _______,  _______,  _______, _______,  _______,     _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,     _______,    _______,            _______,    RESET,   \
    _______,  STAT_EN,  _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______,   _______,TG(_QWERTY), \
    _______,  RGB_TOG,  RGB_HUD, RGB_HUI,     _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,             _______,   \
    _______,  RGB_MOD,  RGB_SAD, RGB_SAI,    _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,                   _______,   \
    _______, RGB_RMOD,  RGB_VAD, RGB_VAI,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,   _______,             \
    _______,  _______,  _______, _______,  _______, _______,                     _______, _______, _______,             _______, _______, _______,      _______,             _______, _______, _______
)
};

/*
Per Key Actions
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

    case RESET:
        if (record->event.pressed) {
            rgblight_setrgb(255, 0, 0); // RED underglow when in reset
            rgblight_setrgb_range(0, 0, 0, LED0, LED3+1); // Disable Status LEDs when going into reset
        } else {
        }
        break;

    case STAT_EN:
        if (record->event.pressed) {
            status_en ^=1; // Toggle status enable LEDs
        } else {
        }
        break;
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }

    return true;
}

/*
LED CONTROL
LED 0 shows keyboard layout
OFF:    COLEMAK
RED:    NORMAL
GREEN:  QWERTY
BLUE:   MACRO

LED 1 shows temp layers
OFF:    NO MOD
RED:    FN
GREEN:  RAISE
BLUE:   LOWER

LED 2 is currently not configured

LED 3 shows caps / num / scroll lock
OFF:    NUM LOCK (enabled by default)
RED:    CAPS LOCK
GREEN:  NUM LOCK DISABLED
BLUE:   SCROLL LOCK
*/
void matrix_init_user(void) {
    rgblight_set_effect_range(0, 18); // Only use the first 18 LEDs for underglow
}

// layer_state_t layer_state_set_user(layer_state_t state) {

//     if (status_en) {

//         uint8_t normal = 0;
//         uint8_t qwerty = 0;
//         uint8_t macro = 0;

//         if (IS_LAYER_ON(_NORMAL)){
//             normal = 32;
//         }
//         if (IS_LAYER_ON(_QWERTY)){
//             qwerty = 32;
//         }
//         if (IS_LAYER_ON(_MACRO)){
//             macro = 32;
//         }
//         // First LED
//         rgblight_setrgb_at(normal, qwerty, macro, LED0);

//         // Second LED
//         switch (get_highest_layer(state)) {

//         case _RAISE:
//             rgblight_setrgb_at(0, 64, 0, LED1);
//             break;
//         case _FN:
//             rgblight_setrgb_at(64, 0, 0, LED1);
//             break;
//         default:
//             rgblight_setrgb_at(0, 0, 0, LED1);
//             break;
//         }
//     } else {
//         rgblight_setrgb_at(0, 0, 0, LED0);
//         rgblight_setrgb_at(0, 0, 0, LED1);
//     }

//   return state;
// };

// Caps / Num / Scroll lock indicator
bool led_update_kb(led_t led_state) {
    // Force caps to on by default
    // Numlock LED will flash for a short time on first boot, disregard it please!
    // static bool once = 1;
    // if (once && !led_state.num_lock){
    //     register_code(KC_NUMLOCK);
    //     unregister_code(KC_NUMLOCK);
    //     led_state.num_lock = true;
    // }
    // once = 0;

    if (status_en){

        uint8_t caps = led_state.caps_lock ? 64 : 0;
        uint8_t num = led_state.num_lock ? 0 : 64; // Inverted as numlock should be on by default

        rgblight_setrgb_at(caps, 0, 0, LED1);
        rgblight_setrgb_at(0, num, 0, LED2);
    } else {
        rgblight_setrgb_at(0, 0, 0, LED1);
        rgblight_setrgb_at(0, 0, 0, LED2);
    }

    return true;
}

/*
Mouse Jiggler
*/
// void matrix_scan_user(void) {
//     if (timer_elapsed32(key_timer) > 60000) {
//         key_timer = timer_read32();
//         if (en && dir)
//             tap_code(KC_MS_U);
//         else if (en && !dir)
//             tap_code(KC_MS_D);
//         dir ^= 1;
//     }
// }
