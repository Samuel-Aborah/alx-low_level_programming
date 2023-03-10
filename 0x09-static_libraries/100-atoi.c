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
	int b = -1;
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == '-')
			b *= -1;

		if (s[a] > 47 && s[a] < 58)
		{
			if (c < 0)
				c = (c * 10) - (s[a] - '0');
			else
				c = (s[a] - '0') * -1;

			if (s[a + 1] < 48 || s[a + 1] > 57)
				break;

		}
	}
	if (b < 0)
		c *= -1;

	return (c);
}
