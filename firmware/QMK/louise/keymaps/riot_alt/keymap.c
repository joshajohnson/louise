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

#define ___ KC_NO

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _ALT,
    _FN,
    _COOL
};

/*
* These are set up as convenience variables.
* The sounds tested were are not able to be distributed for copyright reasons.
* Feel free to define songs in user_song_list.h and reference them below.
*/
float SONG1[][2] = SONG(SAMPLENOTES);
float SONG2[][2] = SONG(SAMPLENOTES);
float SONG3[][2] = SONG(SAMPLENOTES);
float SONG4[][2] = SONG(SAMPLENOTES);
float SONG5[][2] = SONG(SAMPLENOTES);
float SONG6[][2] = SONG(SAMPLENOTES);
float SONG7[][2] = SONG(SAMPLENOTES);
float SONG8[][2] = SONG(SAMPLENOTES);
float SONG9[][2] = SONG(SAMPLENOTES);
float SONG10[][2] = SONG(SAMPLENOTES);
float SONG11[][2] = SONG(SAMPLENOTES);
float SONG12[][2] = SONG(SAMPLENOTES);
float SONG13[][2] = SONG(SAMPLENOTES);
float SONG14[][2] = SONG(SAMPLENOTES);
float SONG15[][2] = SONG(SAMPLENOTES);
float SONG16[][2] = SONG(SAMPLENOTES);
float SONG17[][2] = SONG(SAMPLENOTES);
float SONG18[][2] = SONG(SAMPLENOTES);
float SONG19[][2] = SONG(SAMPLENOTES);
float SONG20[][2] = SONG(SAMPLENOTES);


// LED control
uint8_t status_en = 1;

// Custom Keycodes
enum custom_codes{
    STAT_EN = SAFE_RANGE,
    UNDER_EN,
    JIGGLER,
    Song1,
    Song2,
    Song3,
    Song4,
    Song5,
    Song6,
    Song7,
    Song8,
    Song9,
    Song10,
    Song11,
    Song12,
    Song13,
    Song14,
    Song15,
    Song16,
    Song17,
    Song18,
    Song19,
    Song20
};

/*
    [_BASE] = LAYOUT_ALL(
    _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,               \
    _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______,   _______, _______, \
    _______, _______, _______, _______,     _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,   _______,  \
    _______, _______, _______, _______,    _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,         _______,  \
    _______, _______, _______, _______,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,         _______,     _______,          \
    _______, _______, _______, _______,  _______, _______,                     _______, _______, _______,             _______, _______, _______,      _______,     _______, _______, _______
)*/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_all(
    TG(_COOL),   KC_MPRV, KC_MNXT, KC_MPLY,   KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR, KC_MUTE,  \
    KC_PMNS,   KC_PAST, KC_PSLS,  KC_NUM,       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,         KC_EQL, _______,   KC_BSPC,    KC_DEL,  \
    KC_PPLS,     KC_P7,   KC_P8,   KC_P9,      KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,    KC_RBRC,   LT(_FN, KC_BSLS),               KC_HOME,  \
    _______,     KC_P4,   KC_P5,   KC_P6,    KC_CAPS,           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,       KC_ENT,                     KC_END,  \
    KC_PENT,     KC_P1,   KC_P2,   KC_P3,   KC_LSFT, _______,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M, KC_COMM, KC_DOT,     KC_SLSH,          KC_RSFT,      KC_UP,           \
    _______,   KC_PDOT, _______,   KC_P0,  KC_LCTL, KC_LGUI,                     KC_LALT,  KC_SPC, MO(_FN),             _______,  KC_SPC, KC_RALT,      KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT
),

[_ALT] = LAYOUT_all(
        TG(_COOL),   KC_MPRV, KC_MNXT, KC_MPLY,   KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PSCR, KC_MUTE,  \
    KC_PMNS,   KC_PAST, KC_PSLS,  KC_NUM,       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,         KC_EQL, _______,   KC_BSPC,    KC_DEL,  \
    KC_PPLS,     KC_P7,   KC_P8,   KC_P9,      KC_TAB,       KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC,    KC_RBRC,   LT(_FN, KC_BSLS),               KC_HOME,  \
    _______,     KC_P4,   KC_P5,   KC_P6,    MO(_FN),           KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,       KC_ENT,                     KC_END,  \
    KC_PENT,     KC_P1,   KC_P2,   KC_P3,   KC_LSFT, _______,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M, KC_COMM, KC_DOT,     KC_SLSH,          KC_RSFT,      KC_UP,           \
    _______,   KC_PDOT, _______,   KC_P0,  KC_LCTL, KC_LGUI,                     KC_LALT,  KC_SPC, KC_LGUI,             _______,  KC_SPC, KC_RALT,      KC_RCTL,     KC_LEFT, KC_DOWN, KC_RGHT
),


[_FN] = LAYOUT_all(
    _______,  _______,  _______, _______,    _______, Song1,   Song2,   Song3,   Song4,   Song5,   Song6,   Song7,   Song8,   Song9,  Song10, Song11, Song12, Song16, KC_MPLY,  \
    _______,  STAT_EN,  _______, _______,      _______,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,       _______,    KC_DEL,     _______,  \
    _______,  RGB_TOG,  RGB_HUD, RGB_HUI,     _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,              KC_PGUP,  \
    _______,  RGB_MOD,  RGB_SAD, RGB_SAI,    _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,                     KC_PGDN,  \
    _______, RGB_RMOD,  RGB_VAD, RGB_VAI,   KC_CAPS, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET, _______,      TG(_COOL),           \
    _______,  _______,  _______, _______,  _______, _______,                     _______, _______, _______,             _______, _______, _______,      _______,     _______, TG(_ALT), _______
),

[_COOL] = LAYOUT_all(
  TG(_COOL),   Song1,   Song2,   Song3,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  \
        Song4,   Song5,   Song6,   Song7,      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______,   _______,   _______,  \
        Song8,   Song9,  Song10,  Song11,     _______,    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,    _______,   _______,   _______,  \
      _______,  Song13,  Song14,  Song15,    _______,        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,      _______,        _______,  \
       Song12,  Song16,  Song17,  Song18,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          TG(_COOL),    _______,           \
      _______,  Song19, _______,  Song20,  _______, _______,                     _______, _______, _______,             _______, _______, _______,      _______,     _______, _______, _______
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
            status_en ^=1;
        } else {
        }
        break;

    case RGB_TOG:
        if (record->event.pressed) {
            rgblight_setrgb_range(0, 0, 0, LED0, LED3+1); // Disable Status LEDs when disabling RGB
            return true;
        } else {
        }
        break;
    // Custom song keycode handlers
    case Song1: PLAY_SONG(SONG1); break;
    case Song2: PLAY_SONG(SONG2); break;
    case Song3: PLAY_SONG(SONG3); break;
    case Song4: PLAY_SONG(SONG4); break;
    case Song5: PLAY_SONG(SONG5); break;
    case Song6: PLAY_SONG(SONG6); break;
    case Song7: PLAY_SONG(SONG7); break;
    case Song8: PLAY_SONG(SONG8); break;
    case Song9: PLAY_SONG(SONG9); break;
    case Song10: PLAY_SONG(SONG10); break;
    case Song11: PLAY_SONG(SONG11); break;
    case Song12: PLAY_SONG(SONG12); break;
    case Song13: PLAY_SONG(SONG13); break;
    case Song14: PLAY_SONG(SONG14); break;
    case Song15: PLAY_SONG(SONG15); break;
    case Song16: PLAY_SONG(SONG16); break;
    case Song17: PLAY_SONG(SONG17); break;
    case Song18: PLAY_SONG(SONG18); break;
    case Song19: PLAY_SONG(SONG19); break;
    case Song20: PLAY_SONG(SONG20); break;
    }

    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 1) {
        if (clockwise) {
            if (IS_LAYER_ON(_FN)) {
                tap_code(KC_MNXT);
            }
            else {
                tap_code(KC_VOLU);
            }
        } else {
            if (IS_LAYER_ON(_FN)) {
                tap_code(KC_MPRV);
            }
            else {
                tap_code(KC_VOLD);
            }
        }
    }

    return true;
}

/*
LED CONTROL - LEDS shine right-to-left: LED0 - Right, LED3 - LEFT
LED 0 shows FN status
OFF:    NO
RED:    ON

LED 1 shows CAPSLOCK status
OFF:    NO MOD
ON:    CAPS

LED 2 shows NUMLOCK status
OFF:    NO MOD
ON:    NUMLOCK

LED 3 shows Toggleable layer status lock
OFF:    BASE LAYER
GREEN:  RAISE
RED:    LOWER
WHITE:   RAISE+LOWER
*/
void matrix_init_user(void) {
    rgblight_set_effect_range(0, 18); // Only use the first 18 LEDs for underglow
}

 layer_state_t layer_state_set_user(layer_state_t state) {

     if (status_en) {
         uint8_t fnR = 0;
         if (IS_LAYER_ON_STATE(state, _FN))
         {
             fnR = 255;
         }

         uint8_t layerR = 0;
         uint8_t layerG = 0;
         uint8_t layerB = 0;

         if (IS_LAYER_ON_STATE(state, _ALT)){
             layerR = 255;
         }
         if (IS_LAYER_ON_STATE(state, _COOL)){
             if (layerR == 255) {
                 layerB = 64;
                 layerR = 64;
             }
             layerG = 64;
         }

         rgblight_setrgb_at(layerR, layerG, layerB, LED3);
         rgblight_setrgb_at(fnR, 0, 0, LED0);

     }

   return state;
 }

// Caps / Num lock indicator
bool led_update_kb(led_t led_state) {
    if (status_en){

        uint8_t capsR = led_state.caps_lock ? 32 : 0;
        uint8_t capsG = led_state.caps_lock ? 32 : 0;
        uint8_t capsB = led_state.caps_lock ? 32 : 0;
        uint8_t numR = led_state.num_lock ? 32 : 0; // Inverted as numlock should be on by default
        uint8_t numG = led_state.num_lock ? 32 : 0; // Inverted as numlock should be on by default
        uint8_t numB = led_state.num_lock ? 32 : 0; // Inverted as numlock should be on by default
        rgblight_setrgb_at(capsR, capsG, capsB, LED1);
        rgblight_setrgb_at(numR, numG, numB, LED2);
    } else {
        rgblight_setrgb_at(0, 0, 0, LED1);
        rgblight_setrgb_at(0, 0, 0, LED2);
    }

    return true;
}
