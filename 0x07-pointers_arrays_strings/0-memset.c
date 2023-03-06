#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: constant byte
 * @n: Number of memory bytes
 * Return:s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
		

	}
	return (s);

}
