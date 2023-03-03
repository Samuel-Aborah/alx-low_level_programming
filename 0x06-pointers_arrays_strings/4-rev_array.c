#include "main.h"

/**
 * reverse_array - Reverses the content of an array
 * @a: array
 * @n: number of array elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int g, h;

	for (g = 0; g < n--; g++)
	{
		h = a[g];
		a[g] = a[n];
		a[n] = h;


	}

}
