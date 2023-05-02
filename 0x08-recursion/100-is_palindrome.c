#include "main.h"

/**
 * rec_strlen - Returns the length of a string
 * @s: the string
 * Return: length of string
 */

int rec_strlen(char *s)
{
	if (s[0] != '\0')
		return (1 + rec_strlen(s + 1));
	return (0);
}

/**
 * check - checks if s is palindrome
 * @s: address to string
 * @a: index one
 * @b: index two
 * Return: 1 if palindrome else 0
 */

int check(char *s, int a, int b)
{

	if (s[a] == s[b])
	{
		if (a > b / 2)
			return (1);
		else
			return (check(s, a + 1, b - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if s is a palindrome
 * @s: pointer to string
 * Return: 1 if s is palindrome else 0
 */

int is_palindrome(char *s)
{
	return (check(s, 0, rec_strlen(s) - 1));
}
