#include "main.h"
#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100. But for multiples of 3, it prints
 * Fizz, multiples of 5, Buzz and multiples of both, FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", a);
	}
	printf("\n");

	return (0);

}
