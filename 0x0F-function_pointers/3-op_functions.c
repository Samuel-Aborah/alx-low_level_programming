#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function that adds two integers
 * @a: First integer
 * @b: Second integer
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - Subtracts two integers
 * @a: First Integer
 * @b: Second Integer
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First Integer
 * @b: Second Integer
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - Divides two integers
 * @a: First Integer
 * @b: Second Integer
 * Return: The quotient of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}


/**
 * op_mod - Calculates the modular of two integers
 * @a: First Integer
 * @b: Second Integer
 * Return: The remainder between a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
