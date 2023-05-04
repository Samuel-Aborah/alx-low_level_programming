#include "main.h"

/**
 * get_bit - A function that returns the value of a bit
 * of a given index
 * @n: integer value
 * @index: value of a bit
 * Return: value of bit at inex or -1 upon failure
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);
	else
		return ((n >> index) & 1);
}
