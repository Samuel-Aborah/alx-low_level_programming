#include "main.h"

/**
 * *_strcpy - Copies the string pointed by src, including
 * the terminating null byte to tthe buffer pointed to
 * @dest: destination
 * @src: source
 * Return: string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;

	while (*(src + l) != '\0')
	{
		*(dest + l) = *(src + l);
		l++;

	}

	*(dest + l) = '\0';
	return (dest);
}
