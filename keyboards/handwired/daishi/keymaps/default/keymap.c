#include QMK_KEYBOARD_H

// Layer shorthand
#define _QW 0
#define _FN 1

enum custom_keycodes {
    M_EXAMPLE1 = SAFE_RANGE,
	M_EXAMPLE2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * .-----------------------------------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    |        |        |        |        |        |        |        |        |        | DM1    | DM2    | DMSTOP | PRINT  | SCROLL | PAUSE  | FN     | VOL    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * | F1     | F2     | F3     | F4     | F5     | F6     | F7     | F8     | F9     | F10    | F11    | F12    | DEL    | HOME   | PGUP   | END    | INS    | NUM    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * | `      | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | -      | =      | BACK   | PGDN   | /      | *      | -      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * | TAB    | Q      | W      | E      | R      | T      | Y      | U      | I      | O      | P      | [      | ]      | \      | 7      | 8      | 9      | +      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * | CAPS   | A      | S      | D      | F      | G      | H      | J      | K      | L      | ;      | '      | ENTER  |        | 4      | 5      | 6      | =      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * | LSHIFT | Z      | X      | C      | V      | B      | N      | M      | ,      | .      | /      | SHIFT  |        | UP     | 1	  | 2      | 3      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * | LCTRL  | LGUI   | LALT   |        |        | SPACE  |        |        |        | RALT   | RCTRL  |        | LEFT   | DOWN   | RIGHT  | 0      | .      |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------'
 */

 [_QW] = LAYOUT( /* QWERTY */
  KC_ESC , _______, _______, _______, _______, _______, _______, _______, _______, _______, DM_PLY1, DM_PLY2, DM_RSTP, KC_PSCR, KC_SCRL, KC_PAUS, MO(_FN), KC_MUTE,
  KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_DEL , KC_HOME, KC_PGUP, KC_END , KC_INS , KC_NUM,
  KC_GRV , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_BSPC, KC_PGDN, KC_PSLS, KC_PAST, KC_PMNS,
  KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS, KC_P7  , KC_P8  , KC_P9  , KC_PPLS,
  KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT, KC_ENT ,          KC_P4  , KC_P5  , KC_P6  , KC_EQL ,
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,          KC_UP  , KC_P1  , KC_P2  , KC_P3  , KC_PENT,
  KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC ,                            KC_RALT, KC_RCTL,          KC_LEFT, KC_DOWN, KC_RGHT, KC_P0  , KC_PDOT
 ),

/* FN
 * .-----------------------------------------------------------------------------------------------------------------------------------------------------------------.
 * | QK_BOOT  | F13    | F14    | F15    | f16    | f17    | f18    | F19    | F20    | F21    | DM1 R  | DM2 R  | DMSTOP |        |        |        | FN     | Debug  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------|
 * |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------------------------'
 */

 [_FN] = LAYOUT( /* Function */
  QK_BOOT  , KC_F13 , KC_F14 , KC_F15 , KC_F16 , KC_F17 , KC_F18 , KC_F19 , KC_F20 , KC_F21 , DM_REC1, DM_REC2, DM_RSTP, _______, _______, _______, MO(_FN), DB_TOGG,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______,
  _______, _______,  _______,                  _______,                            _______, _______,          _______, _______, _______, _______, _______
 )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case M_EXAMPLE1:
                SEND_STRING("This is an example macro!"SS_TAP(X_ENTER)); //prints "This is an example macro!" and hits Enter
                return false;
            case M_EXAMPLE2:
                SEND_STRING("This is a another example!"SS_TAP(X_ENTER)); //prints "This is a another example!" and hits Enter
                return false;
        }
    }
    return true;
};

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (clockwise) {
  tap_code(KC_VOLU);
 } else {
  tap_code(KC_VOLD);
 }
 return true;
}

void matrix_init_user(void) {
  // Call the keymap level matrix init.

  // Set our LED pins as output
  setPinOutput(C4);
  setPinOutput(C5);
  setPinOutput(C6);
}

void led_set_kb(uint8_t usb_led) {
    if (IS_LED_OFF(usb_led, USB_LED_NUM_LOCK)) {
        writePinLow(C4);
    } else {
        writePinHigh(C4);
    }
    if (IS_LED_OFF(usb_led, USB_LED_CAPS_LOCK)) {
        writePinLow(C5);
    } else {
        writePinHigh(C5);
    }
    if (IS_LED_OFF(usb_led, USB_LED_SCROLL_LOCK)) {
        writePinLow(C6);
    } else {
        writePinHigh(C6);
    }
}
