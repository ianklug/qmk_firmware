/* Copyright 2022 Ian Klug
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

/* define names for use in layer keycodes and the keymap */
enum layer_names {
    BASE
};

/*      bemini key layout, player 2 configuration
 *      .-----------------------------------------------------------------------------------------.
 *      |                                                                                         |
 *      |    .-------.        .-------.-------.-------.-------.                                   |
 *      |    |       |        |       |       |       |       |                                   |
 *      |    |  K10  |        |       |       |       |       |                                   |
 *      |    |       |        |  K08  |  K06  |  K04  |  K02  |                                   |
 *      |    +-------+        |       |       |       |       |               .-------.           |
 *      |    |       |        |       |       |       |       |               |       |           |
 *      |    |  K11  |    .---+---+---+---+---+---+---+---+---+---.           |K13/ENC|           |
 *      |    |       |    |       |       |       |       |       |           |       |           |
 *      |    +-------+    |       |       |       |       |       |           '-------'           |
 *      |    |       |    |  K09  |  K07  |  K05  |  K03  |  K01  |                               |
 *      |    |  K12  |    |       |       |       |       |       |                               |
 *      |    |       |    |       |       |       |       |       |                               |
 *      |    '-------'    '-------'-------'-------'-------'-------'                               |
 *      |                                                                                         |
 *      '-----------------------------------------------------------------------------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
/*      K01      K02      K03      K04      K05      K06      K07      K08      K09      K10      K11      K12      K13      */
        KC_DOT,  KC_L,    KC_COMM, KC_K,    KC_M,    KC_J,    KC_N,    KC_H,    KC_B,    KC_TAB,  KC_1,    KC_ENT,  KC_RSFT
    )
};
