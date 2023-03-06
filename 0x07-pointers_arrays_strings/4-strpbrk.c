#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string
 * @accept: string
 * Return: 0 always
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
		if (*s == accept[x])
		return (s);
		}
	s++;

	}
	return ('\0');
}
