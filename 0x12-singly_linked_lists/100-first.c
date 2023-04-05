#include <stdio.h>

void tort_hare(void) __attribute__ ((constructor));

/**
 * tort_hare - A function that is executed before
 * the main function
 */

void tort_hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
