#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integerr
 * @c: third integer
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && b >= c)
	{
		printf("%d is the largest of the 3 numbers\n", a);
	}
	else if (b >= c && c >= a)
	{
		printf("%d is the largest of the 3 numbers\n", b);
	}
	else
	{
		printf("%d is the largest of the 3 numbers\n", c);
	}

	return (0);
}
