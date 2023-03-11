#include <stdlib.h>
#include <stdio.h>

/**
 * main - Multiplies two numbers
 * @argc: total number of arguments passed
 * @argv: Array of character pointers
 * Return: 0 always
 *
 */

int main(int argc, char **argv)
{
	int num1; 
	int num2;
	int product;

	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}
	
		product = (num1 * num2);

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", product);

	
		return (0);
}

