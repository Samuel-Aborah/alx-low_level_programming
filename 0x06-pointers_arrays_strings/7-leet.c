#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input
 * Return: the value of n
 */

char *leet(char *n)
{
	int i, m;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n[i] == str1[m])
			{
				n[i] = str2[m];

			}

		}
	}
	return (n);
}
