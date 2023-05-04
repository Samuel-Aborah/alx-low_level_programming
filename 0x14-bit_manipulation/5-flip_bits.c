#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * needed to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int num = 0;

	flip = n ^ m;

	while (flip != 0)
	{
		/*increase count if final bit is set */

		num += flip & 1;

		/* Shift to right by one bit */
		flip >>= 1;
	}
	return (num);
}
