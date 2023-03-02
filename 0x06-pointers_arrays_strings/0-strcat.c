#include "main.h"

/**
 * *_strcat - Concatenates two strings
 * @dest: the destination string
 * @src: the source strings
 *Return: string
 *
 */

char *_strcat(char *dest, char *src)
{
	int len, i;

	while (dest[len] != '\0')
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++, len++)
	{
		dest[len] = src[i];
	}

	dest[len] = '\0';
	return (dest);
}
