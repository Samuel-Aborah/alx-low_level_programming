#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except 2 and 4
 * followed by a new line.
 *
 */

void print_most_numbers(void)
{
	char Bb;

	for (Bb = 0; Bb <= 9; Bb++)
	{
		if (Bb != 2 && Bb != 4)

			_putchar(Bb);
	}
		_putchar('\n');
}
