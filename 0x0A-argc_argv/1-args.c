#include "main.h"
#include <stdio.h>

/**
 * main - A function that prints the number of arguments passed into it
 * @argc: total number of arguments passed
 * @argv: Array of character pointers
 * Return: 0 always
 *
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);

}
