#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143 followed by a new line
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	long int a;
	long int Aa;
	long int b;

	a = 612852475143;
	Aa = -1;

	while (a % 2 == 0)
	{
		Aa = 2;
		a /= 2;
	}
	for (b = 3; b <= sqrt(a); b = b + 2)
	{
		while (a % b == 0)
		{
			Aa = b;
			a = a / b;
		}

	}
	if (a > 2)
		Aa = a;
	printf("%ld\n", Aa);

	return (0);


}
