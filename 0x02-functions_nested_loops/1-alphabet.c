#include "main.h"

/**
 *main - A function that prints the alphabet in
 *lowercase followed by a new line.
 *
 *Return: Always 0
 *
 */

void print_alphabet(void)
{
	char myChar;

	for (myChar = 'a'; myChar <= 'z'; myChar++)
	{
		_putchar(myChar);
	}
		_putchar('\n');

	return (0);
}
