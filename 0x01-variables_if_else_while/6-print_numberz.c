#include <stdio.h>
/**
 * main - A prograam that prints all single digits from 0-9
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
		putchar('\n');
	return (0);
}

