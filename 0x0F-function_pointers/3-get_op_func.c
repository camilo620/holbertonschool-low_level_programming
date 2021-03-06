#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - test the operand sent by the user and choose the correct
 * @s: operand to test
 * Return: result of the callback
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

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
	return (0);
}
