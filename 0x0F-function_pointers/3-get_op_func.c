#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - get operational function
 * @s: string passed to function
 * Return: Integer value
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (ops[i].op == s)
			return (ops[i].f);
	}
	return (NULL);
}
