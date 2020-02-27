#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
int funcion(int n, int m)
{
	if ((n / m) * (n / m) > n)
	{
		return (funcion((n / m), m));
	}
	if ((n / m) * (n / m) == n)
	{
		return (n / m);
	}
	else
	{
		return (-1);
	}
}

int _sqrt_recursion(int n)
{
	int i = funcion(n, 2);
	return (i);
}
