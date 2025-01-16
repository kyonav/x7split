// Alternative dvorak programmer keycodes containing support for accentuation

// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "keycodes.h"

// clang-format off

// Aliases
#define DP_DLR  KC_GRV  // $
#define DP_AMPR KC_1    // &
#define DP_LBRC KC_2    // [
#define DP_LCBR KC_3    // {
#define DP_RCBR KC_4    // }
#define DP_LPRN KC_5    // (
#define DP_EQL  KC_6    // =
#define DP_ASTR KC_7    // *
#define DP_RPRN KC_8    // )
#define DP_PLUS KC_9    // +
#define DP_RBRC KC_0    // ]
#define DP_EXLM KC_MINS // !
#define DP_HASH KC_EQL  // #
#define DP_SCLN KC_Q    // ;
#define DP_COMM KC_W    // ,
#define DP_DOT  KC_E    // .
#define DP_P    KC_R    // P
#define DP_Y    KC_T    // Y
#define DP_F    KC_Y    // F
#define DP_G    KC_U    // G
#define DP_C    KC_I    // C
#define DP_R    KC_O    // R
#define DP_L    KC_P    // L
#define DP_SLSH KC_LBRC // /
#define DP_AT   KC_RBRC // @
#define DP_BSLS KC_BSLS // (backslash)
#define DP_A    KC_A    // A
#define DP_O    KC_S    // O
#define DP_E    KC_D    // E
#define DP_U    KC_F    // U
#define DP_I    KC_G    // I
#define DP_D    KC_H    // D
#define DP_H    KC_J    // H
#define DP_T    KC_K    // T
#define DP_N    KC_L    // N
#define DP_S    KC_SCLN // S
#define DP_MINS KC_QUOT // -
#define DP_QUOT KC_Z    // '
#define DP_Q    KC_X    // Q
#define DP_J    KC_C    // J
#define DP_K    KC_V    // K
#define DP_X    KC_B    // X
#define DP_B    KC_N    // B
#define DP_M    KC_M    // M
#define DP_W    KC_COMM // W
#define DP_V    KC_DOT  // V
#define DP_Z    KC_SLSH // Z
#define DP_TILD S(ALGR(DP_DLR))  // ~
#define DP_PERC S(DP_AMPR) // %
#define DP_7    S(DP_LBRC) // 7
#define DP_5    S(DP_LCBR) // 5
#define DP_3    S(DP_RCBR) // 3
#define DP_1    S(DP_LPRN) // 1
#define DP_9    S(DP_EQL)  // 9
#define DP_0    S(DP_ASTR) // 0
#define DP_2    S(DP_RPRN) // 2
#define DP_4    S(DP_PLUS) // 4
#define DP_6    S(DP_RBRC) // 6
#define DP_8    S(DP_EXLM) // 8
#define DP_GRV  S(DP_HASH) // `
#define DP_COLN S(DP_SCLN) // :
#define DP_LABK S(DP_COMM) // <
#define DP_RABK S(DP_DOT)  // >
#define DP_QUES S(DP_SLSH) // ?
#define DP_CIRC S(DP_AT)   // ^
#define DP_PIPE S(DP_BSLS) // |
#define DP_UNDS S(DP_MINS) // _
#define DP_DQUO S(DP_QUOT) // "

// > CUSTOM < //
#include "./default_keymap_us_international_linux.h"

#define DP_TAB KC_TAB // (tab)
#define DP_SPC KC_SPC // (spacebar)
#define DP_BSPC KC_BSPC // (backspace)
#define DP_ENT KC_ENT // (enter)

// Arrow keys
#define DP_DOWN KC_DOWN
#define DP_UP KC_UP
#define DP_LEFT KC_LEFT
#define DP_RIGHT KC_RIGHT

// F Keys
#define DP_F1 KC_F1
#define DP_F2 KC_F2
#define DP_F3 KC_F3
#define DP_F4 KC_F4
#define DP_F5 KC_F5
#define DP_F6 KC_F6
#define DP_F7 KC_F7
#define DP_F8 KC_F8
#define DP_F9 KC_F9
#define DP_F10 KC_F10