#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int a;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
				_putchar('1');
			_putchar(a % 10 + '0');

		}
		_putchar('\n');
	}
}
