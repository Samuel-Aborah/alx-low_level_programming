#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements of an array of integers
 * @a: The array
 * @n: number of elements
 *
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

		if (c != n - 1)
			printf(", ");
	}
	printf("\n");
}

