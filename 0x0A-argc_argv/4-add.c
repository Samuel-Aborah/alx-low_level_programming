#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - adds postive integers
 * @argc: total number of arguments passed
 * @argv: Array of character pointers
 * Return: 0 if successful, else return 1
 *
 */

int main(int argc, char *argv[])
{
	int a, sum = 0;
	unsigned int b;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; b < strlen(argv[a]); b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum = sum + atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
