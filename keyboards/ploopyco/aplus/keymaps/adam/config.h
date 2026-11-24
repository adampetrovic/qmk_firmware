/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 * Copyright 2020 Ploopy Corporation
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

#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 8
/* Rotate pointer motion by 180 degrees */
#define POINTING_DEVICE_ROTATION_180

/* Linear sensor output; macOS applies the pointer acceleration curve.
   Avoid 900/1700/2500: reading those CPI values can upset the PMW3360. */
#define PLOOPY_DPI_OPTIONS { 400, 600, 800, 1200, 1600 }
#define PLOOPY_DPI_DEFAULT 1

/* macOS does not honour the hi-res wheel multiplier, so each drag scroll unit
   is a whole notch. Counts of ball travel per notch at 600 CPI. Tested: stock
   1.0 / 0.3 and 8.0 / 8.0 were both far too fast. */
#undef PLOOPY_DRAGSCROLL_DIVISOR_H
#define PLOOPY_DRAGSCROLL_DIVISOR_H 40.0
#undef PLOOPY_DRAGSCROLL_DIVISOR_V
#define PLOOPY_DRAGSCROLL_DIVISOR_V 40.0

/* Net ball travel needed to fire a gesture, scaled for unaccelerated 600 CPI. */
#undef POINTING_DEVICE_GESTURES_THRESHOLD
#define POINTING_DEVICE_GESTURES_THRESHOLD 100
