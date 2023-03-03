#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string into uppercase
 * @i: pointer
 * Return: i
 *
 */

char *string_toupper(char *i)
{
	int j = 0;

	for (j = 0; i[j] != '\0'; j++)
	{
		if (i[j] >= 'a' && i[j] <= 'z')
		{
			i[j] = i[j] - 32;
		}

	}
	return (i);
}
