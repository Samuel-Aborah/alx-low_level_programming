#include "main.h"

/**
 * _atoi - Converts astring to an integer
 * @s: String to be converted
 *
 * Return: Integer converted from string
 *
 */

int _atoi(char *s)
{
	int i, b, a, l, e, c;

	i = 0;
	b = 0;
	a = 0;
	l = 0;
	e = 0;
	c = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && e == 0)
	{
		if (s[i] == '-')
			++b;

		if (s[i] >= '0' && s[i] <= '9')
		{
			c = s[i] - '0';
			if (b % 2)
				c = -c;
			a = a * 10 + c;
			e = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			e = 0;
		}
		i++;
	}

	if (e == 0)
		return (0);

		return (a);




}
