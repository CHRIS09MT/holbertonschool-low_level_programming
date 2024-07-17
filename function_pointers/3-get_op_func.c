#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * get_op_func - function that selects the correct function
 * @s: is the operator passed as argument to the program
 * Return: return function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ope[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	int a = 0;

	while (a < 5)
	{
		if (strcmp(s, ops[a].op) == 0)
			return (ops[a].f);
		i++;
	}
	return (0);
}
