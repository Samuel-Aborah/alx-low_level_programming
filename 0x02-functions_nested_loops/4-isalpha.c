#include "main.h"

/**
 * _isalpha - Checks for alpha character
 * @c :the character to be checked
 * Return: 1 if letter is c, else return 0
 *
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c >= 'A' && c <= 'Z')
		return (0);
}
