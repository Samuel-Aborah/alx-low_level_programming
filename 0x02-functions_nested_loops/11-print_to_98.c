#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers till 98
 * @n: the first number
 *
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
