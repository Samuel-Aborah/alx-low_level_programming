#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: the value
 * Return: The pointer
 *
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = (void *) malloc(b * sizeof(void));

	if (a == NULL)
		exit(98);

	return (a);
}
