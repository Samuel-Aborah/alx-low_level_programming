#include "main.h"

/**
 * puts_half - prints half a string followed by a new line
 * @str: input
 *
 */

void puts_half(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}

	str -= (l / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
