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
	int i = 0;
	int len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 == "";

	if (s2 == NULL)
		s2 == "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (i = 0; i < len2; i++)
		result[i] = s2[i];

	result[len1 + len2] = '\0';

	return (result);
}
