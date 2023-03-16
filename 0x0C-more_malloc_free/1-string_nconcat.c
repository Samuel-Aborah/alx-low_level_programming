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
	unsigned int len, len1, a, b;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s1[len]; len++)
		;

	for (len1 = 0; s2[len1]; len1++)
		;

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
		result[a]  = s1[a];
	}
	for (b = 0; b < n && s2[b]; b++)
	{
		result[a] = s2[b];
		a++;
	}
	result[a] = '\0';
	return (result);
}
