#include "main.h"

/**
 * print_triangle - printd a triangle, followed by a new line
 * @size: Size of the triangle
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
		int c;
		int d;

		for (c = 1; c < size; c++)
		{
			for (d = 1; d < size; d++)
			{
				_putchar(' ');

			}
			for (d = 1; d <= c; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}


}
