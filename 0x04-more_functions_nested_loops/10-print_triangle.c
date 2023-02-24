#include "main.h"

/**
 * print_triangle - - Prints a traingle on the terminal
 * @size: The size of the triangle
 * Return: Void
 *
 */

void print_triangle(int size)
{
	int a, b, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (d = size - a; d >= 1; d--)
			{
				_putchar(32);
			}
			for (b = 1; b <= a; b++)
			{
				_putchar(35);
			}

			_putchar('\n');

		}

	}

}
