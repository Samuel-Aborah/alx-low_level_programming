#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@n: the number
 *Return: last digit of a number
 */

int print_last_digit(int n)
{


	int a = (n % 10);

	if (a < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);
}
