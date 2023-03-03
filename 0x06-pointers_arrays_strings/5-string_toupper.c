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

	while (i[j])
	{
		if (i[j] >= 'a' && i[j] <= 'z')
			i[j] -= 'a' - 'A';
		i++;

	}
	return (i);


}
