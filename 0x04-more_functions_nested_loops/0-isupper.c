#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 *@c: the character
 *Return: 1 if letter is uppercase, else return 0
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c  <= 'Z')

		return (1);

	else
		return (0);
}
