#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 *@argc: total number of arguments passed
 *@argv: array of character pointers
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, pennies, result;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	/** Parse the parameter passed **/
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	/** Calculate number of coins **/
	quarters = cents / 25;
	cents %= 5;

	dimes = cents / 10;
	cents %= 10;

	nickels = cents / 5;
	cents %= 5;

	pennies = cents;

	result = (quarters + dimes + nickels + pennies);

	printf("%d\n", result);

	return (0);
}
