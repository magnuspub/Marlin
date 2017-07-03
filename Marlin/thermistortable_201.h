/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

// PT100 with INA826 amp on Ultimaker v2.0 electronics
// The PT100 in the Ultimaker v2.0 electronics has a high sample value for a high temperature.
// This does not match the normal thermistor behaviour so we need to set the following defines
#if THERMISTORHEATER_0 == 201
  #define HEATER_0_RAW_HI_TEMP 16383
  #define HEATER_0_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_1 == 201
  #define HEATER_1_RAW_HI_TEMP 16383
  #define HEATER_1_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_2 == 201
  #define HEATER_2_RAW_HI_TEMP 16383
  #define HEATER_2_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_3 == 201
  #define HEATER_3_RAW_HI_TEMP 16383
  #define HEATER_3_RAW_LO_TEMP 0
#endif
#if THERMISTORHEATER_4 == 201
  #define HEATER_4_RAW_HI_TEMP 16383
  #define HEATER_4_RAW_LO_TEMP 0
#endif
#if THERMISTORBED == 201
  #define HEATER_BED_RAW_HI_TEMP 16383
  #define HEATER_BED_RAW_LO_TEMP 0
#endif
const short temptable_201[][2] PROGMEM = {
{  0 * OVERSAMPLENR,    0},
{241 * OVERSAMPLENR,    1},
{249 * OVERSAMPLENR,   10},
{259 * OVERSAMPLENR,   20},
{267 * OVERSAMPLENR,   30},
{275 * OVERSAMPLENR,   40},
{283 * OVERSAMPLENR,   50},
{291 * OVERSAMPLENR,   60},
{299 * OVERSAMPLENR,   70},
{307 * OVERSAMPLENR,   80},
{315 * OVERSAMPLENR,   90},
{323 * OVERSAMPLENR,  100},
{331 * OVERSAMPLENR,  110},
{340 * OVERSAMPLENR,  120},
{348 * OVERSAMPLENR,  130},
{354 * OVERSAMPLENR,  140},
{362 * OVERSAMPLENR,  150},
{370 * OVERSAMPLENR,  160},
{378 * OVERSAMPLENR,  170},
{386 * OVERSAMPLENR,  180},
{394 * OVERSAMPLENR,  190},
{402 * OVERSAMPLENR,  200},
{410 * OVERSAMPLENR,  210},
{418 * OVERSAMPLENR,  220},
{426 * OVERSAMPLENR,  230},
{432 * OVERSAMPLENR,  240},
{440 * OVERSAMPLENR,  250},
{448 * OVERSAMPLENR,  260},
{454 * OVERSAMPLENR,  270},
{462 * OVERSAMPLENR,  280},
{469 * OVERSAMPLENR,  290},
{475 * OVERSAMPLENR,  300},
{483 * OVERSAMPLENR,  310},
{491 * OVERSAMPLENR,  320},
{499 * OVERSAMPLENR,  330},
{505 * OVERSAMPLENR,  340},
{513 * OVERSAMPLENR,  350},
{519 * OVERSAMPLENR,  360},
{527 * OVERSAMPLENR,  370},
{533 * OVERSAMPLENR,  380},
{541 * OVERSAMPLENR,  390},
{549 * OVERSAMPLENR,  400},
{616 * OVERSAMPLENR,  500},
{682 * OVERSAMPLENR,  600},
{741 * OVERSAMPLENR,  700},
{801 * OVERSAMPLENR,  800},
{856 * OVERSAMPLENR,  900},
{910 * OVERSAMPLENR, 1000},
{960 * OVERSAMPLENR, 1100},
};