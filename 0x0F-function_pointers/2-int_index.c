#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: pointer
 * @size: Number of elements in an array
 * @cmp: function pointer
 * Return: if size is <= 0, return 1 and no element match
 * return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
