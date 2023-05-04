#include "main.h"

/**
 * print_binary - A function that prints a binary 
 * representation of a number
 * @n: The number to be represented
 */

void print_binary(unsigned long int n)
{
	int move = 0;
	unsigned long int var;

	var = n;

	/* If the number to be represented is 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* Calculate number of moves (shifts) that represents binary number */
	while ((var >>= 1) > 0)
		move++;

	/* Using move (shift) printn in binary from left to right */
	while (move >= 0) 
	{
		if ((n >> move) & 1)
			_putchar ('1');
		else
			_putchar ('0');
		move--;
	}
	return;
}
