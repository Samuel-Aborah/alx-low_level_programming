#include "main.h"

/**
 * test - tests for the natural square root of a number
 * @num: first number
 * @num1: second number
 * Return: an integer
 */

int test(int num, int num1)
{

	/* Check if num matches num1 */
	if (num * num == num1)
		return (num);
	/* Recurse upper half */
	else if (num * num > num1)
	{
		return (-1);
	}
	/* recurse lower half */
	return (test(num + 1, num1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 * @n: the number
 * Return: natural square root or -1 upon failure
 */

int _sqrt_recursion(int n)
{
	/* check base case */
	if (n == 0 || n == 1)
		return (n);
	/* check for negative input */
	else if (n < 0)
		return (-1);

	/* call test function */
	return (test(1, n));
}
