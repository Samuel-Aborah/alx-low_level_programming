#include <stdio.h>
/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: Always 0
 *
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
	{
		putchar(za);
	}
		putchar('\n');
	return (0);
}
