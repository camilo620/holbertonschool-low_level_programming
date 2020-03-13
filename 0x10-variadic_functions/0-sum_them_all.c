#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - sums all the arguments of the function
 * @n: number of the arguments
 * Return: Sum of the arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list1;
	int sum = 0;

	if (n == 0)
	{
		va_end(list1);
		return (0);
	}

	va_start(list1, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list1, int);
	}

	va_end(list1);

	return (sum);
}
