#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *@n: the number of the yet to be printed sign
 * Return: 1 and prints + if number is greater than 0
 * else returns 0 and prints 0 if number is 0
 *  else returns -1 and prints - if number is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{	_putchar('-');
		return (-1);

	}
}
