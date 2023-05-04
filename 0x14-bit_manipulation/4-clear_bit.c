#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to
 * 0 at a given index
 * @index: index starting from 0
 * @n: pointer to decimal
 * Return: 1 if it worked else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	/* If index is out of range */
	if (index >= 32)
		return (-1);

	/* Set index at 1 and store in one bit mask */
	a = 1UL << index;

	/* Clear bit at index */
	*n = *n & ~a;

	return (1);
}
