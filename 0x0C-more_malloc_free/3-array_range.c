#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the least integers
 * @max: the highest integers
 * Return: a pointer of the array
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *) malloc(sizeof(int) * (max - min + 1));

	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
