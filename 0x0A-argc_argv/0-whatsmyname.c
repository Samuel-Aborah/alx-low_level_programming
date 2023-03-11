#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints its own name
 * @argc: total number of arguments passed
 * @argv: Array of character pointers
 * Return: 0 always
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

}
