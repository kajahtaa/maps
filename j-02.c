/*
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


#define LWR MO(1)
#define KAJ MO(2)
#define RAISE MO(3)
#define ADJ MO(4)
#define FN MO(5)
#define FN1 MO(6)


#define RSFT_ENT MT(MOD_RSFT, KC_ENT)
#define CTL_ESC MT(MOD_LCTL,KC_ESC)
#define CTL_QUOT MT(MOD_RCTL,KC_QUOT)
#define RCMD_LEFT RCMD_T(KC_LEFT)
#define RALT_DOWN RALT_T(KC_DOWN)
#define RCTL_UP RCTL_T(KC_UP)
#define LCMD_RIGHT LGUI_T(KC_RIGHT)
#define SPC_NUM LT(_KARJALASTA,KC_SPC)
#define ALT_W LALT_T(KC_W)
#define ALT_O RALT_T(KC_O)
#define CMD_E LCMD_T(KC_E)
#define CMD_I LCMD_T(KC_I)
#define SFT_F LSFT_T(KC_F)
#define SFT_J RSFT_T(KC_J)
#define CNTRL_D LCTL_T(KC_D)
#define CNTRL_K RCTL_T(KC_K)
#define MAPPS LCTL(KC_DOWN)
#define VL LCTL(KC_LEFT)
#define VR LCTL(KC_RIGHT)
#define EXPOSE LCTL(KC_UP)
#define CHROMETABSEARCH LSG(KC_A)
#define KC_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen
#define GG LT(_FN,KC_G)
#define LOCK  C(G(KC_Q))

// Layer shorthand
enum layer_names {
    _BASE,
    _LOWER,
    _KARJALASTA,
    _RAISE,
    _ADJUST,
    _FN,
    _FN1,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_2x2u(
      LOCK, _______, _______, _______, _______, _______, KC_HOME, KC_INSERT, KC_PGUP, _______, _______, _______, _______, _______, _______,
      KC_TAB,  KC_Q,    ALT_W,    CMD_E,     KC_R,    KC_T,    KC_END,     KC_CAPP,     KC_PGDN,     KC_Y,    KC_U,    CMD_I,    ALT_O,    KC_P,    KC_BSPC,
      CTL_ESC, KC_A,    KC_S,    CNTRL_D,     SFT_F,    GG,    ADJ,     _______,     FN,     KC_H,    SFT_J,    CNTRL_K,    KC_L,    KC_SCLN, KC_QUOT,
      KC_LSFT, KC_Z,    KC_X,    KC_C,     KC_V,    KC_B,    MAPPS,     CHROMETABSEARCH,     EXPOSE,     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_ENT,
      _______,    FN, LCMD_RIGHT, LWR,   SPC_NUM,   FN,   SPC_NUM,  RAISE,   ADJ,  FN1, _______
    ),

    [_LOWER] = LAYOUT_2x2u(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      KC_TAB,  KC_EXLM, KC_AT,  KC_LCBR, KC_RCBR, KC_PIPE,    _______,     _______,     _______,     _______,    KC_PGDN, KC_PGUP, KC_INSERT, KC_PSCR, KC_DEL,
      CTL_ESC, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,    _______,     _______,     _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,  KC_SLSH, KC_PIPE,
      _______,  KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD , _______,     _______,     _______,  _______,    KC_END,  KC_HOME, _______,  _______, _______,
      QK_BOOT,    _______, _______, _______,   _______,   _______,   _______,  _______,   _______,  _______, _______
    ),

    [_KARJALASTA] = LAYOUT_2x2u(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    _______,     _______,     _______,     KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,    _______,
      _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______,     _______,     _______, KC_6,    KC_7,    KC_8,    KC_9,    KC_0, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
      _______,    _______,    _______, _______, _______,   _______,   _______,   _______,  _______,   _______,  _______
    ),

    [_RAISE] = LAYOUT_2x2u(
      QK_BOOT, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MINS,  KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
      _______,    _______,    _______, _______, _______,   _______,   _______,   _______,  _______,   _______,  _______
    ),

    [_ADJUST] = LAYOUT_2x2u(
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_F13, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
      _______,    _______,    _______, _______, _______,   _______,   _______,   _______,  _______,   _______,  _______
    ),

    [_FN] = LAYOUT_2x2u(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, VL, MAPPS, EXPOSE, VR, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_FN1] = LAYOUT_2x2u(
        _______, _______, RGB_TOG, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, KC_BSLS, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )

};
