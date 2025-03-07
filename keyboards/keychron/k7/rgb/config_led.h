/*
Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>

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

#include <config.h>

// Backlight configuration
#define BACKLIGHT_LEVELS 8

#define LED_MATRIX_ROWS 5
#define LED_MATRIX_ROW_CHANNELS 3
#define LED_MATRIX_ROWS_HW (LED_MATRIX_ROWS * LED_MATRIX_ROW_CHANNELS)
//note how ROW pins are assined in the following sequence top down row1 RBG, row2 RBG and so on
#define LED_MATRIX_ROW_PINS { C4, C6, C5, C7, C9, C8, C10, C12, C11, C13, B13, C14, D3, B14, B15 }

#define LED_MATRIX_COLS 15
#define LED_MATRIX_COLUMNS LED_MATRIX_COLS
#define LED_MATRIX_COL_PINS MATRIX_COL_PINS

#ifdef KEYMAP_ISO
    #define DRIVER_LED_TOTAL (69)
#else
    #define DRIVER_LED_TOTAL (68)
#endif
