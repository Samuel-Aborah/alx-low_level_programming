#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that converts a binary
 * number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;
	const char *bin = b;

	/** If the binary number is null */
	if (b == NULL)
		return (0);

	/* Loop to check if each char in b is 0 or 1 */
	for (; *bin != '\0'; bin++)
	{
		/* If a char is not 0 or 1 */
		if (*bin != '0' && *bin != '1')
			return (0);

		/* If 0, count is left shifted by one bit */
		count = (count << 1) + (*bin - '0');
	}
	return (count);
}
