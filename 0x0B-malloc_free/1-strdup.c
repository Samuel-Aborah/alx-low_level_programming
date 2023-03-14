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
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	stg = (char *) malloc((length + 1) * sizeof(char));

	if (stg == NULL)
		return (NULL);

	for (i = 0; i < length; i++)

		stg[i] = str[i];

	stg[i] = '\0';
	return (stg);
}




