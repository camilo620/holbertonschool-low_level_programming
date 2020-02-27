#include "holberton.h"
/**
 * funcion - recursion to find square root
 *
 * @m: square root
 *
 * @n: number to find square root
 *
 * Return: m
 *
 */
int funcion(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}
	if (m * m > n)
	{
		return (-1);
	}
	return (funcion(n, m + 1));
}

/**
 * _sqrt_recursion - finds the square root of n
 *
 * @n: number to find square root
 *
 * Return: i = square root of
 */

int _sqrt_recursion(int n)
{
	int i = funcion(n, 1);

	return (i);
}
