#include "holberton.h"
/**
 * _pow_recursion - gives the result of x power of y
 *
 * @x: base
 *
 * @y: power
 *
 * Return: result of x power y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y <= -1)
	{
		return (-1);
	}
	y--;
	return (x * _pow_recursion(x, y));
}
