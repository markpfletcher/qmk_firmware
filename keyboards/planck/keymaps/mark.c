// This is the canonical layout file for the Quantum project. If you want to add another keyboard,
// this is the style you want to emulate.

// #include "keymap_common.h"
#include "planck.h"
#ifdef BACKLIGHT_ENABLE
  #include "backlight.h"
#endif

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QW 0
#define _LW 1
#define _RS 2
#define _OT 3
#define _TK 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = { /* Qwerty */
/* QWERTY layer
 *
 * ,-----------------------------------------------------------------------.
 * | tab |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  | bspc|
 * |-----------------------------------------------------------------------|
 * | esc |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |enter|
 * |-----------------------------------------------------------------------|
 * |shift|  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |shift|
 * |-----------------------------------------------------------------------|
 * |     | ctl | alt | cmd |lower|    spc    |raise|left |down | up  |right|
 * `-----------------------------------------------------------------------'
 */
  {KC_TAB,       KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC},
  {KC_ESC,       KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_ENT},
  {KC_LSFT,      KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT},
  {LT(_OT, _TK), KC_LCTL,  KC_LALT,  KC_LGUI,  MO(_LW),  KC_SPC,   KC_SPC,   MO(_RS),  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT}
},
[_RS] = { /* RAISE */
/* Raised layer
 *
 * ,-----------------------------------------------------------------------.
 * |  `  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |delet|
 * |-----------------------------------------------------------------------|
 * | esc | F1  | F2  | F3  | F4  | F5  | F6  |  -  |  =  |  [  |  ]  |  \  |
 * |-----------------------------------------------------------------------|
 * |shift| F7  | F8  | F9  | F10 | F11 | F12 |  m  |  ,  |  .  |  "  |shift|
 * |-----------------------------------------------------------------------|
 * |     | ctl | alt | cmd |lower|    bspc   |raise|home |pg dn|pg up| end |
 * `-----------------------------------------------------------------------'
 */
  {KC_GRV,      KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL},
  {KC_TRNS,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,  KC_BSLS},
  {KC_TRNS,     KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  KC_TRNS,  FUNC(1),  KC_TRNS},
  {KC_CAPSLOCK, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_BSPC,  KC_BSPC,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END}
},
[_LW] = { /* LOWER */
/* Lowered layer
 *
 * ,-----------------------------------------------------------------------.
 * |  ~  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  |delet|
 * |-----------------------------------------------------------------------|
 * | esc | F1  | F2  | F3  | F4  | F5  | F6  |  _  |  +  |  {  |  }  |  |  |
 * |-----------------------------------------------------------------------|
 * |shift| F7  | F8  | F9  | F10 | F11 | F12 |  m  |  ,  |  .  |  '  |shift|
 * |-----------------------------------------------------------------------|
 * |     | ctl | alt | cmd |lower|    bspc   |raise|next |vol d|vol u|play |
 * `-----------------------------------------------------------------------'
 */
  {KC_TILD,     KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,  KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LPRN,  KC_RPRN,  KC_DEL},
  {KC_TRNS,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_UNDS,  KC_PLUS,  KC_LCBR,  KC_RCBR,  KC_PIPE},
  {KC_TRNS,     KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_QUOT,  KC_TRNS},
  {M(0),        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_ENT,   KC_ENT,   KC_TRNS,  KC_MNXT,  KC_VOLD,  KC_VOLU,  KC_MPLY}
},
[_OT] = { /* Other */
  {KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,     KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS},
  {KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS}
},
[_TK] = { /* Ten Keys */
/* Ten keys layer
 *
 * ,-----------------------------------------------------------------------.
 * |  ~  | F9  | F10 | F11 | F12 |     |  -  |  +  |  7  |  8  |  9  |bspc |
 * |-----------------------------------------------------------------------|
 * | esc | F5  | F6  | F7  | F8  |     |  /  |  *  |  4  |  5  |  6  |enter|
 * |-----------------------------------------------------------------------|
 * |shift| F1  | F2  | F3  | F4  |     |     |  0  |  1  |  2  |  3  |shift|
 * |-----------------------------------------------------------------------|
 * |     | ctl | alt | cmd |lower|    spc    |raise|left |down | up  |right|
 * `-----------------------------------------------------------------------'
 */
  {KC_TAB,      KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_NO,    KC_MINS,  KC_PLUS,  KC_7,     KC_8,     KC_9,     KC_BSPC},
  {KC_ESC,      KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_NO,    KC_SLSH,  KC_ASTR,  KC_4,     KC_5,     KC_6,     KC_ENT},
  {KC_LSFT,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_NO,    KC_NO,    KC_0,     KC_1,     KC_2,     KC_3,     KC_RSFT},
  {TO(_QW),     KC_LCTL,  KC_LALT,  KC_LGUI,  KC_NO,    KC_SPC,   KC_SPC,   KC_NO,    KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT}
}
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_MODS_KEY(MOD_LSFT, KC_QUOT)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
