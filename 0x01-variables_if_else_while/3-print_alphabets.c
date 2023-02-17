#include <stdio.h>

/**
 * main - A program that prints lowercase and Uppercase Alphabets
 *
 * Return: Always 0
 */
int main(void)
{
	char sl, bl;

	for (sl = 'a', bl = 'A'; sl <= 'z', bl <= 'Z'; sl++, bl++)
	{
		putchar(sl);
	}
	{
		putchar(bl);
	}
		putchar('\n');
	return (0);
}
