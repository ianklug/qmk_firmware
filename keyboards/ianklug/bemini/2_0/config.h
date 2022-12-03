/*
Copyright 2022 Ian Klug

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

#define MATRIX_ROWS 1
#define MATRIX_COLS 13

/* switch wiring (direct, no diodes) */
#define DIRECT_PINS { \
    { GP25, GP24, GP23, GP22, GP15, GP14, GP13, GP12, GP11, GP10, GP9, GP8, GP18 } \
}

/* encoder pins */
#define ENCODERS_PAD_A { GP16 }
#define ENCODERS_PAD_B { GP17 }

/* debounce */
#define DEBOUNCE 5

/* gamepad buttons and axes */
#define JOYSTICK_BUTTON_COUNT 16
#define JOYSTICK_AXES_COUNT 2

/* n-key rollover */
#define FORCE_NKRO

/* rgb led */
#ifdef RGBLIGHT_ENABLE
    #define RGB_DI_PIN GP26
    #define RGBLED_NUM 1
#endif
