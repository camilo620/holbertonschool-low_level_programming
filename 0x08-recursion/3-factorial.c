#include "holberton.h"
/**
 * factorial - prints the factorial of n
 *
 * @n: number to do the factorial
 *
 * Return: -1 if n lower than 0 and factorial if bigger than it
 *
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
