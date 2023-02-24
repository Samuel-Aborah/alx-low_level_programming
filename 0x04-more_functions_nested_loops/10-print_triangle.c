#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 *@size: Size of the triangle
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m;
		int p;
		int q;

		for (m = 1; m <= size; m++)
		{
			for (q = size - m; q >= 1; q--)
			{
				_putchar(' ');

			}
			for (p = 1; p <= m; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}


}
