#include "main.h"

/**
 * set_bit - A function that sets the value of a
 * bit to 1 at a given index.
 * @n: pointer to decimal passed
 * @index: Index starting from 0
 * Return: 1 if it worked, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	/* Check if index in within bounds of the UL integer */
	if (index >= 32)
		return (-1);

	/* set index using bitwise or and shift the value of 1UL left */
	*n |= (1UL << index);

	return (1);
}
