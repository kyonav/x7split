#include QMK_KEYBOARD_H
#include <stdio.h>
#include "leds.c"

#include "./custom_keymap_dvorak_programmer_international.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT( //Alphabet
		DP_SCLN, DP_COMM, DP_DOT, DP_P, DP_Y,                                                                    DP_F, DP_G, DP_C, DP_R, DP_L,
        LSFT_T(DP_A), LGUI_T(DP_O), LCTL_T(DP_E), LALT_T(DP_U), DP_I,                                            DP_D, LALT_T(DP_H), LCTL_T(DP_T), LGUI_T(DP_N), LSFT_T(DP_S),
		DP_QUOT, DP_Q, DP_J, DP_K, DP_X,                                                                         DP_B, DP_M, DP_W, DP_V, DP_Z,
		                           XXXXXXX, XXXXXXX, XXXXXXX, DP_TAB, LT(2, DP_SPC),             LT(1, DP_BSPC), DP_ENT, XXXXXXX, XXXXXXX, XXXXXXX),

	[1] = LAYOUT( //Numbers and Punctuation
		DP_LBRC, DP_LCBR, DP_RCBR, DP_LPRN, DP_EQL,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		DP_DLR, DP_AMPR, DP_HASH, XXXXXXX, XXXXXXX,                               XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

	[2] = LAYOUT( //Punctuation and Arrow key
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              DP_ASTR, DP_RPRN, DP_PLUS, DP_RBRC, DP_EXLM,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, DP_SLSH, DP_AT, DP_BSLS, DP_MINS,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

	[3] = LAYOUT( //Numpad
		DP_7, DP_5, DP_3, DP_1, DP_9,                                             DP_0, DP_2, DP_4, DP_6, DP_8,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, DP_DOWN, DP_UP, DP_LEFT, DP_RGHT,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),

	[4] = LAYOUT( //
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
		         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX),
};

const uint16_t PROGMEM shifted_numbers_tolayer3 [] = {LT(2, DP_SPC), LT(1, DP_BSPC), COMBO_END};
combo_t key_combos[] = {
    COMBO(shifted_numbers_tolayer3, LT(3, XXXXXXX)),

};
