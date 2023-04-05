#include "main.h"

/**
 * is_palindrome - A function that checks if  a
 * string is a palindrome
 * @s: The string to be checked
 * Return: 1 on success and 0 upon failure
 */

int is_palindrome(char *s)
{
	len = 0;

	while (s[len] != '\0')
		len++;

	if (len <= 1)
		return (1);

	else
	{
		if (s[0] == s[len - 1])
			return (is_palindrome(s + 1, len - 2));
	}
	return (0);
}
