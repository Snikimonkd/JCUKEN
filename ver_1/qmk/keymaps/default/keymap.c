// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layer {
	_QWERTY,
	_NUMBERS,
    _ARROWS,
    _EXTRA,
};

#define NUMB MO(_NUMBERS)
#define ARROWS MO(_ARROWS)

// home row mods
#define HOME_A LSFT_T(KC_A)
#define HOME_S LCTL_T(KC_S)
#define HOME_D LALT_T(KC_D)
#define HOME_F LGUI_T(KC_F)

#define HOME_J RGUI_T(KC_J)
#define HOME_K RALT_T(KC_K)
#define HOME_L RCTL_T(KC_L)
#define HOME_SCLN RSFT_T(KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
            KC_ESC , KC_GRV , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , /**/ KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC,
                     KC_TAB , KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , /**/ KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,
                     KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , /**/ KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_ENT,
                                       KC_LCTL, KC_LALT, NUMB   , KC_SPC , /**/ KC_BSPC, ARROWS , KC_LCMD, KC_ESC
    ),
    [_NUMBERS] = LAYOUT(
            _______, _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, /**/ KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_UNDS, KC_PLUS,
                     _______, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , /**/ KC_MINS, KC_EQL , KC_BSLS, _______, _______, _______,
                     _______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , /**/ KC_UNDS, KC_PLUS, KC_PIPE, _______, _______, _______,
                                       _______, _______, _______, _______, /**/ _______, _______, _______, _______
    ),
    [_ARROWS] = LAYOUT(
            _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, /**/ KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, _______, _______,
                     _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
                                       _______, _______, _______, _______, /**/ _______, _______, _______, _______
    ),
    [_EXTRA] = LAYOUT(
            _______, _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
                     _______, _______, _______, _______, _______, _______, /**/ _______, _______, _______, _______, _______, _______,
                                       _______, _______, _______, _______, /**/ _______, _______, _______, _______
    )
};

