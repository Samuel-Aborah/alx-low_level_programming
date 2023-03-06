#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of
 * a square matrix of integers
 * @a: string
 * @size: size of a square
 * Return : 0 always
 *
 */
void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		sum_1 = sum_1 + a[x * size + x];
	}
	for (x = size - 1; x > 0; x--)
	{
		sum_2 = a[x * size + (size - x - 1)];
	}
	printf("%d\n %d\n", sum_1, sum_2);
}
