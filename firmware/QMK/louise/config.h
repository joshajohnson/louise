/* Copyright 2022 joshajohnson, riotpunch

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x6A6A  // JJ
#define PRODUCT_ID      0xD134  // Louise
#define DEVICE_VER      0x0001
#define MANUFACTURER    Josh and Riot
#define PRODUCT         louise
#define DESCRIPTION     louise keyboard

/* key matrix */
#define MATRIX_ROWS 6
#define MATRIX_COLS 20

#define MATRIX_ROW_PINS { A9, A8, A15, C13, C15, C0 }
#define MATRIX_COL_PINS { C5, C4, A7, A6, C9, C8, C7, C6, B14, B13, B12, C14, B9, B8, B7, B6, B5, B4, B3, C12 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

/* Audio Things */
#define AUDIO_PIN A4

/* Rotary Encoder Things */
// #define ENCODER_DIRECTION_FLIP
#define ENCODERS_PAD_A { B10, C10 }
#define ENCODERS_PAD_B { B11, C11 }

/* Lighting things */
#define RGBLIGHT_LAYERS
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF

#define RGB_DI_PIN B15
#ifdef RGB_DI_PIN
/* 18 underglow, 4 status */
  #define RGBLED_NUM 22
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 255 /* The maximum brightness level */
  #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
/*== all animations enable ==*/
  #define RGBLIGHT_ANIMATIONS
/*== or choose animations ==*/
//   #define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
//   #define RGBLIGHT_EFFECT_SNAKE
//   #define RGBLIGHT_EFFECT_KNIGHT
//   #define RGBLIGHT_EFFECT_CHRISTMAS
//   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
//   #define RGBLIGHT_EFFECT_RGB_TEST
//   #define RGBLIGHT_EFFECT_ALTERNATING
/*== customize breathing effect ==*/
  /*==== (DEFAULT) use fixed table instead of exp() and sin() ====*/
  #define RGBLIGHT_BREATHE_TABLE_SIZE 256      // 256(default) or 128 or 64
  /*==== use exp() and sin() ====*/
  #define RGBLIGHT_EFFECT_BREATHE_CENTER 1.85  // 1 to 2.7
  #define RGBLIGHT_EFFECT_BREATHE_MAX    255   // 0 to 255
#endif

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Tap delay for tap vs hold */
#define TAPPING_TERM 200

/* Slow down key press speed to ensure computer picks it up */
#define TAP_CODE_DELAY 20

/* Mouse Things */
#define MOUSEKEY_INTERVAL       20
#define MOUSEKEY_DELAY          300
#define MOUSEKEY_TIME_TO_MAX    100
#define MOUSEKEY_MAX_SPEED      3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* disable these deprecated features by default */
#ifndef LINK_TIME_OPTIMIZATION_ENABLE
  #define NO_ACTION_MACRO
  #define NO_ACTION_FUNCTION
#endif

// Status LED positions
#define LED0 18
#define LED1 19
#define LED2 20
#define LED3 21

// Up size of EEPROM to allow 4 layers with VIA
#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2047

