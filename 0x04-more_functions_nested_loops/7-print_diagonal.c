#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character '-' should be printed
 *
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;
		int p;

		for (m = 1; m < n; m++)
		{
			for (p = 1; p < n; p++)
			{
				if (m == p)
					_putchar('\\');

				else if (p < m)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
