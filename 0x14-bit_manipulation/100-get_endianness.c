#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness
 * Return: 0, if big endian or -1 if little endian.
 */

int get_endianness(void)
{
	int count = 1;
	char *tmp = (char*)&count;
	
	if (*tmp == 1)
	{
		printf("Little endian\n");
		return (0);
	}
	else
	{
		printf("Big endian\n");
		return (1);
	}
}
