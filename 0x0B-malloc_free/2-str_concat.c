#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First String
 * @s2: Second String
 * Return: a newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2, and null terminated
 * or return null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0, len;
	char *result;

	if (s1 != NULL)
	{
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[i++] != '\0')
			len2++;
	}
	len = len1 + len2;
	result = (char *) malloc((len + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i] = s2[j];

	result[len] = '\0';

	return (result);
}
