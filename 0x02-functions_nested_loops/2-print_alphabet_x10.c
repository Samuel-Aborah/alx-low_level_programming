#include "main.h"

/**
 *print_alphabet_x10 - Prints lowercase alphabets 10 times
 */


void print_alphabet_x10(void)
{
	char aa;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (aa = 'a'; aa <= 'z'; aa++)

			_putchar(aa);

		_putchar('\n');
	}

}
