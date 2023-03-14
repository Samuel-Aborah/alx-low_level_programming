#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of an array
 * @height: height of an array
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **alloc, a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	alloc = (int **) malloc((height) * sizeof(int *));

	if (alloc == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		alloc[a] = (int *) malloc((width) * sizeof(int));

		if (alloc[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(alloc[b]);

		}
			free(alloc);
			return (NULL);

		for (b = 0; b < width; b++)
			alloc[a][b] = 0;
	}
	return (alloc);

}
