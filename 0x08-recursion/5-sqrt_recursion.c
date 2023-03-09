#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 * Return: _sqrt_recursion
 *
 */

int _sqrt_recursion(int n)
{
	int s;

	if (n == 0 || n == 1)
		return (n);

	else if (s * s < n)
		return (_sqrt_recursion(s + 1, n));

	else if (s * s == n)
		return (s);

	return (-1);
}
