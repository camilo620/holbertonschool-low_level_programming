#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - prints the result of an operation
 * @argc: number of arguments
 * @argv: array of command arguments
 * Return: 0 if failure, result otherwise
 */

int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	int result;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(argv[2])(n1, n2);
	printf("%d\n", result);
	return (0);
}
