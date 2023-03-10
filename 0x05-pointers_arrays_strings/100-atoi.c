#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: Integer converted from string
 *
 */

int _atoi(char *s)
{
	int c = 0;
	unsigned int a = 0;
	int b = 1;
	int d = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			b *= -1;
		}
		if (s[c] >= 48 && s[c] <= 57)
		{
			d = 1;
			a = (a * 10) + (s[c] - '0');
			c++;
		}

		if (d == 1)
		{
			break;
		}
		c++;
	}
	a *= d;
	return (a);
}
