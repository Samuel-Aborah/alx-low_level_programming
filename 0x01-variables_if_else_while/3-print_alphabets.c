#include <stdio.h>

/**
 * main - A program that prints lowercase and Uppercase Alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char Aa;

	for (Aa = 'a'; Aa <= 'z'; Aa++)
	{
		putchar(Aa);
	}
	for (Aa = 'A'; Aa <= 'Z'; Aa++)
	{
		putchar(Aa);
	}
		putchar('\n');
	return (0);
}
