#include <stdio.h>
/**
 * main - Prints all Hexadecimal numbers in lowercase
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char Af;
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	{
	for (Af = 'a'; Af <= 'f'; Af++)
		putchar(Af);
	}
		putchar('\n');
	return (0);
}
