#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: list of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;

	va_start(args, format);

	while (*format)
	{
		switch (*format)
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s)
				{
					printf("%s", s);
				}
				else
				{
					printf("(nil)");
				}
				break;
			default:
				continue;
		}

		if (*format)
		{
			printf(", ");
		}
	}
	printf("\n"), va_end(args);
}
