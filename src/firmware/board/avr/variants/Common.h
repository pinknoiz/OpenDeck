/*
    OpenDeck MIDI platform firmware
    Copyright (C) 2015-2017 Igor Petrovic

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

//common constants for all avr boards

#define DIGITAL_VALUE_THRESHOLD         1000
#define ANALOG_7_BIT_STEP_MIN           6
#define ANALOG_14_BIT_STEP_MIN          10
#define FSR_MIN_VALUE                   40
#define FSR_MAX_VALUE                   340

#define AFTERTOUCH_MAX_VALUE            600
#define AFTERTOUCH_SEND_TIMEOUT_IGNORE  25
#define AFTERTOUCH_SEND_TIMEOUT_STEP    2
#define AFTERTOUCH_SEND_TIMEOUT         100

#define ADC_MIN_VALUE                   0
#define ADC_MAX_VALUE                   1023

#define ADC_LOW_CUTOFF                  20
#define ADC_HIGH_CUTOFF                 1010