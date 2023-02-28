#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 * @str: The string
 * Return: print
 *
 */

void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
			_putchar(str[a]);

		else
			continue;


	}
	_putchar('\n');
}
