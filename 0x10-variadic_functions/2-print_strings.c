#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings -  a function that prints strings, followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: A variable number of the parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;

	char *str;

	va_list args;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (a != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
