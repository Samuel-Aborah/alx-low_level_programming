#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments
 * of a program
 * @ac: the number of arguments
 * @av: an array of strings
 * Return: A pointer to a new string or null if it fails
 */

char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, length = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b] != '\0')
		{
			a++;
			b++;
			length++;
		}
		_putchar('\n');
	}

	ptr = (char *) malloc(sizeof(char) * (length + 1));

	/** If malloc fails */
	if (ptr == NULL)
		return (NULL);

	while (a < ac)
	{
		while (av[a][b] != '\0')
		{
			ptr[length++] = av[a][b];
			a++;
			b++;
		}
		_putchar('\n');
	}
	ptr[length] = '\0';

	return (ptr);
}
