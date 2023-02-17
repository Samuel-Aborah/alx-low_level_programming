#include <stdio.h>
/**
 * main - A program that prints the alphabet in lowercase except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char Aa;

	for (Aa = 'a'; Aa <= 'z'; Aa++)
	{
		if (Aa != 'q' && Aa != 'e')

			putchar(Aa);
	}
		putchar('\n');
	return (0);
}

