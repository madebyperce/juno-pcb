/*Copyright 2021 perce
 *
 *This program is free software: you can redistribute it and/or modify
 *it under the terms of the GNU General Public License as published by
 *the Free Software Foundation, either version 2 of the License, or
 *(at your option) any later version.
 *
 *This program is distributed in the hope that it will be useful,
 *but WITHOUT ANY WARRANTY; without even the implied warranty of
 *MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *GNU General Public License for more details.
 *
 *You should have received a copy of the GNU General Public License
 *along with this program.  If not, see<http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

static uint16_t random_value = 157;

enum custom_keycodes
{
	SNIP = SAFE_RANGE,
};

enum macro_id
{
	RANDOM_JUNO,
};

#define RANJUN M(RANDOM_JUNO)

const macro_t* action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
	uint8_t clockbyte = 0;
	clockbyte = TCNT1 % 256;
	uint8_t rval;
	switch (id)
	{
		case RANDOM_JUNO:
			/* liberally borrowed from https://github.com/cbbrowne */
			random_value = ((random_value + randadd) *randmul) % randmod;
			if (record->event.pressed)
			{
				rval = (random_value ^ clockbyte) % 10;
				if (rval == 0)
				{
					SEND_STRING("My name is Juno!!!! \n");
				}
				if (rval == 1)
				{
					SEND_STRING("RooOOOoOoooo \n");
				}
				if (rval == 2)
				{
					SEND_STRING("rUuuUUuUUUuuuuuuuu \n");
				}
				if (rval == 3)
				{
					SEND_STRING("Sometimes my poops are soft :(\n");
				}
				if (rval == 4)
				{
					SEND_STRING("rooo? \n");
				}
				if (rval == 5)
				{
					SEND_STRING("BORK BORK \n");
				}
				if (rval == 6)
				{
					SEND_STRING("*lick* \n");
				}
				if (rval == 7)
				{
					SEND_STRING("rrrrrrrrrrrrrrrRRrrrr \n");
				}
				if (rval == 8)
				{
					SEND_STRING("AWOOOOOOOOOOOOO \n");
				}
				if (rval == 9)
				{
					SEND_STRING("*pant pant* \n");
				}
				break;
			}
			break;
	}
	return MACRO_NONE;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = { [0] = LAYOUT(RANJUN)
};
