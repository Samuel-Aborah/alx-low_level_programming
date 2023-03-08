#include "main.h"

/**
 * _puts_recursion - Prints out a string, followed by a new line
 * @s: String
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
		_putchar(*s++);

	_putchar ('\n');
}
