#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Memory area destination
 * @src: Memory area source
 * @n: number of bytes copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);

}

