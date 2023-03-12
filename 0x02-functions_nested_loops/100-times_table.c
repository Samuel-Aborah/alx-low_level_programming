#include "main.h"

/**
 * print_times_table - Prints the n times table
 *@n: The times table to be printed
 *
 */

void print_times_table(int n)
{
	for (n = 0; n <= 15; n++)

	if (n > 15)
		putchar ('\0');

	else if (n < 0)
		putchar ('\0');

	else
		putchar ('n');
}
