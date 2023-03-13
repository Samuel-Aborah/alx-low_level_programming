#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new allocated space in memory
 * @str:String
 *Return: Pointer to a duplicated string
 */

char *_strdup(char *str)
{
	char *stg;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
		j++;

	stg = (char *) malloc((j + 1) * sizeof(char));

	if (stg == NULL)
		return (NULL);

	for (i = 0; i < j; i++)

		stg[i] = str[i];

	stg[i] = '\0';
	return (stg);
}




