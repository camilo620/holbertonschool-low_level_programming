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
    int i;
    va_list list1;
    int sum;

    if (n == 0)
    {
        va_end(va_list);
        return (0);
    }

    va_start(va_list, n);

    for (i = 0; i < n; i++)
    {
        sum += va_arg(va_list, list1);
    }

    va_end(va_list);

    return (sum);
}
