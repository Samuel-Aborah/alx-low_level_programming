#include "main.h"

/**
 * rev_string - Reverses a string
 * @s - string
 *
 * Return: s
 *
 */
void rev_string(char *s)
{
	int i, j, l;
	char c;

	for (i = 0; j = l - 1; i < j; i++, j--)
	{
		c = *s[i];
		*s[i] = *s[j];
		*s[j] = c;
	
	
	}



}
		
