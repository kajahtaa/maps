// Copyright 2023 Kael Soares Augusto (@Dwctor)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    _QWERTY = 0,
    _LOWER,
    _karjalasta,
    _RAISE,
    _MACRO,
    _ADJUST
};


#define LOWER MO(1)
#define RAISE MO(2)
#define ADJ MO(_ADJUST)

#define MT_RSFT_ENT MT(MOD_RSFT, KC_ENT)
#define CTL_ESC MT(MOD_LCTL,KC_ESC)
#define SPC_NUM LT(_karjalasta,KC_SPC)
#define ALT_W LALT_T(KC_W)
#define ALT_O RALT_T(KC_O)
#define CMD_E LCMD_T(KC_E)
#define CMD_I LCMD_T(KC_I)
#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define CNTRL_D LCTL_T(KC_D)
#define CNTRL_K RCTL_T(KC_K)
#define EXPOSE LCTL(KC_UP)
#define GG LT(_MACRO,KC_G)
#define VL LCTL(KC_LEFT)
#define MAPPS LCTL(KC_DOWN)
#define EXPOSE LCTL(KC_UP)
#define VR LCTL(KC_RIGHT)
#define CTS LSG(KC_A)
#define KC_PSA LGUI(LSFT(KC_4))        // Capture portion of screen


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [_QWERTY] = LAYOUT_split_3x6_3(
        KC_TAB,    KC_Q,   ALT_W,  CMD_E,  KC_R,    KC_T,                               KC_Y,    KC_U,    CMD_I,    ALT_O,    KC_P,    KC_BSPC,
        CTL_ESC,   KC_A,   KC_S,   CNTRL_D,   SFT_F,   GG,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, MT_RSFT_ENT,
                                            LOWER, SPC_NUM, MO(_ADJUST),           MO(_MACRO), SPC_NUM, MO(_RAISE)
    ),
    [_LOWER] = LAYOUT_split_3x6_3(
        _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                               KC_Y,    KC_PGDN, KC_PGUP, KC_INSERT, KC_PSCR, KC_DEL,
        _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,                               KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  KC_SLSH, KC_BSLS,
        _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                               KC_N,    KC_END,    KC_HOME, KC_DOT,  KC_SLSH, KC_RSFT,
                                            _______, _______, QK_BOOT,           KC_PSA,  _______,  _______
    ),
    [_karjalasta] = LAYOUT_split_3x6_3(
        _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                               KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,    KC_BSPC,
        _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_QUOT,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            _______, _______, _______,           _______,  _______,  _______
    ),
    [_RAISE] = LAYOUT_split_3x6_3(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            _______, _______, KC_PSA,           QK_BOOT,  _______,  _______
    ),
    [_MACRO] = LAYOUT_split_3x6_3(
        _______, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               VL, MAPPS, EXPOSE, VR,    KC_SCLN, KC_QUOT,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            _______, _______, _______,           _______,  _______,  _______
    ),
    
    [_ADJUST] = LAYOUT_split_3x6_3(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,    KC_BSPC,
        _______, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                                            _______, _______, _______,           _______,  _______,  _______
    )

};
