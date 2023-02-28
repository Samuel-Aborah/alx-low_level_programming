#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string
 *
 * Return: s
 *
 */
void rev_string(char *s)
{
	int i;
	char c = s[0];
	int j = 0;

	while (s[j] != '\0')
		j++;

	for (i = 0; i < j; i++, j--)
	{
		c = s[i];

		s[i] = s[j];

		s[j] = c;

	}

}
