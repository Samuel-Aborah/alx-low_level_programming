#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 * Return: A reversed string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	else
		_putchar(*s);
		_print_rev_recursion(s - 1);

}
