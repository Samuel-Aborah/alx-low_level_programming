#include "main.h"

/**
 *print_alphabet_x10 - Prints lowercase alphabets 10 times
 */


void print_alphabet_x10(void)
{
	char aa;
	int ten;

	for (aa = 'a'; aa <= 'z'; aa++)
	{
		for (ten = 0; ten < 10; ten++)

		_putchar(aa);
	}
	_putchar('\n');
}
