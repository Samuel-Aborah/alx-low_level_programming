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

	while (a > n)
	{
		s[a] = b;
		a--;

	}
	return (s);

}
