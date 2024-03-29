#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user.
 * @s:the operator passed as argument to the program
 * Return: Any of the operators for calculation
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	int a = 0;

	while (a < 5)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);

		a++;
	}
	return (NULL);
}
