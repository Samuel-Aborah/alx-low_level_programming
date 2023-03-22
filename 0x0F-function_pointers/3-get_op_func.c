#include "3-calc.h"
#include <stdlib.h>
#include  <string.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user.
 * @s:the operator passed as argument to the program
 * Return: 0 always
 */

int (*get_op_func(char *s))(int, int)
{
	int a;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	for (a = 0; a < 5; a++)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);
	}
	return (0);
}
