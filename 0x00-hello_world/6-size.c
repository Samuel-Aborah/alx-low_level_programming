#include <stdio.h>

/**
 * main - The parent function of the C program
 *
 * Return: Always void (Success)
 */

int main(void)
{
	char ch;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of int: %d byte(s)\n", sizeof(i));
	printf("Size of long int: %d byte(s)\n", sizeof(li));
	printf("Size of long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);


}
