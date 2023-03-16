#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings and returns
 * a pointer to a newly allocated memory
 * @s1: first character
 * @s2: Second character
 * @n: unsigned int
 * Return: Null, if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len1, a;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[len1] != '\0')
	{
		len1++;
	}

	if (n >= len1)
	{
		n = len1;
	}

	result = (char *) malloc((len + n + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < n; a++)
	{
		result[len + 1] = s2[a];
	}

	result[len + n] = '\0';
	return (result);
}
