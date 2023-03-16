#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings and returns a pointer
 * to a newly allocated space in memory
 * @s1: first character
 * @s2: second character
 * @n: unsigned int
 * Return: Null if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, c;
	char *ptr;

	if (s1 == NULL)
	{
		a = 0;
	}
	else
	{
		for (a = 0; s1[a]; ++a)
		;
	}
	if (s2 == NULL)
	{	
		b = 0;
	}
	else
	{	
		for (b = 0; s2[b]; ++b)
			;
	}
	if (b > n)
		b = n;

	ptr = malloc((a + b + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		ptr[c] = s1[c];

	for (c = 0; c < b; c++)
		ptr[c + a] = s2[c];
		ptr[a + b] = '\0';

	return (ptr);


}
