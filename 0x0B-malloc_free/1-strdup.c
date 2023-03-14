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
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	stg = (char *) malloc((j + 1) * sizeof(char));

	if (stg == 0)
		return (NULL);
	
	while (str[j])
		j++;

	for (i = 0; i < j; i++)

		stg[i] = str[i];

	stg[i] = '\0';
	return (stg);
}




