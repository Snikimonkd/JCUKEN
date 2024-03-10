// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layer {
	_QWERTY,
	_NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
        KC_ESC, KC_GRV, KC_Q, KC_W, KC_E, KC_R, KC_T,/**/KC_Y, KC_U, KC_I,    KC_O,  KC_P,    KC_LBRC, KC_RBRC,
                KC_TAB,   KC_A, KC_S, KC_D, KC_F, KC_G,/**/KC_H, KC_J, KC_K,    KC_L,  KC_SCLN, KC_QUOT,
                KC_LSFT , KC_Z, KC_X, KC_C, KC_V, KC_B,/**/KC_N, KC_M, KC_COMM, KC_DOT,KC_SLSH, KC_ENT,
                        KC_LCTL, KC_LALT, MO(_NUM), KC_SPC,/**/KC_BSPC, KC_2, KC_PLUS, KC_EQL
    ),
    [_NUM] = LAYOUT(
       _______, _______, LSFT(KC_1), LSFT(KC_2), LSFT(KC_3), LSFT(KC_4), LSFT(KC_5),/**/LSFT(KC_6), LSFT(KC_7), LSFT(KC_8), LSFT(KC_9), LSFT(KC_0), _______, _______,
                _______, KC_1, KC_2, KC_3, KC_4, KC_5,/**/KC_H, KC_J, KC_K,    KC_L,  KC_SCLN, KC_QUOT,
                _______, KC_6, KC_7, KC_8, KC_9, KC_0,/**/KC_N, KC_M, KC_COMM, KC_DOT,KC_SLSH, KC_ENT,
                        KC_LCTL, KC_LALT, _______, KC_SPC,/**/KC_BSPC, KC_2, KC_PLUS, KC_EQL
    )
};
