#include "main.h"

/**
 *print_alphabet - prints lowercase alphabets followed by a new line.
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
}
