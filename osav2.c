/* Copyright 2019 jrfhoutx
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

#define _REEDER      _M1
#define _MAIL        _M2
#define _REEDER_FN   _M1_FN1
#define _MAIL_FN     _M2_FN1


#define MT_RSFT_ENT MT(MOD_RSFT, KC_ENT)
#define CTL_ESC MT(MOD_LCTL,KC_ESC)
#define ALT_W LALT_T(KC_W)
#define ALT_O RALT_T(KC_O)
#define CMD_E LCMD_T(KC_E)
#define CMD_I LCMD_T(KC_I)
#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define CNTRL_D LCTL_T(KC_D)
#define CNTRL_K RCTL_T(KC_K)
#define SPC_L LT(1,KC_SPC)
#define SPC_R LT(2,KC_SPC)
#define MAPPS LCTL(KC_DOWN)
#define VL LCTL(KC_LEFT)
#define VR LCTL(KC_RIGHT)
#define EXPOSE LCTL(KC_UP)
#define CHROMETABSEARCH LSG(KC_A)
#define KC_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen
#define GG LT(4,KC_G)
#define LOCK  C(G(KC_Q))



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(
     KC_CAPP, KC_ESC,  KC_1, KC_2,    KC_3, KC_4,   KC_5, KC_6,            KC_7, KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_PIPE, KC_GRAVE,
     KC_PGUP, KC_TAB,  KC_Q, ALT_W,   CMD_E, KC_R,   KC_T,                  KC_Y, KC_U,  CMD_I,   KC_O,    KC_P,    KC_BSPC, KC_RBRC, KC_BSPC,
     KC_PGDN, CTL_ESC, KC_A, KC_S,    CNTRL_D, SFT_F,   GG,                  KC_H, SFT_J,   CNTRL_K,    KC_L,    KC_SCLN, KC_QUOT, KC_BACKSLASH,
             KC_LSFT,       KC_Z,    KC_X, KC_C,   KC_V, KC_B,            EXPOSE,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   MT_RSFT_ENT, LOCK,
             MO(3),       VL,       SPC_L,       MO(5),                 SPC_R,          VR,                            MO(3) ),

    [1] = LAYOUT_all(
     KC_MUTE, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_TRNS,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_F13,
     KC_VOLU, KC_TRNS, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                  KC_TRNS, KC_PGDN, KC_PGUP, KC_INSERT, KC_PSCR, KC_DEL, KC_TRNS, KC_TRNS,
     KC_VOLD, KC_TRNS, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,                  KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  KC_SLSH, KC_PIPE, KC_TRNS,
              KC_TRNS,          KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,         MAPPS, KC_TRNS, KC_END,  KC_HOME, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
    [2] = LAYOUT_all(
     KC_CAPP, KC_TRNS, KC_F13, KC_F14, KC_F15, KC_F16, KC_F17, KC_F18,        KC_F19, KC_F20, KC_F21,   KC_F22, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_HOME, KC_TRNS, KC_TRNS,   KC_P7,   KC_P8,   KC_P9, KC_PSLS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_END, KC_TRNS, KC_TRNS,   KC_P4,   KC_P5,   KC_P6, KC_PAST,                  KC_TRNS, KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_TRNS,
              KC_TRNS,          KC_TRNS,   KC_P1,   KC_P2,   KC_P3, KC_PPLS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,            KC_P0,          KC_PDOT,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
    [3] = LAYOUT_all(
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_NUM, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, RGB_TOG, RGB_SAI, RGB_HUI, RGB_VAI, RGB_MOD,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS,          KC_TRNS,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
    [4] = LAYOUT_all(
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_BRMU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_BRMD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                  VL, MAPPS, EXPOSE, VR, KC_TRNS, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              QK_BOOT,          KC_TRNS,          KC_TRNS,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
    [5] = LAYOUT_all(
     KC_TRNS, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_TRNS,         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_F13,
     KC_LNUM, KC_TRNS, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                  KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_LSCR, KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                  KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS, KC_TRNS,
              KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
              QK_BOOT,          KC_TRNS,          KC_TRNS,          KC_TRNS,                  KC_TRNS,          KC_TRNS,                            KC_TRNS ),
 

};

