#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: int a
 * @b: int b
 *
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;

	*a = *b;

	*b = d;

}
