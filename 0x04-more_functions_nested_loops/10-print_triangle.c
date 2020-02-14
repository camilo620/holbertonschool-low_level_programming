#include "holberton.h"
/**
 * print_triangle - print a triangle with #
 *
 * @size: size of the triangle
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (b = size - a; b > 0; b--)
		{
			_putchar(' ');

		for (b = 0; b < a; b++)
		{
			_putchar('#');
		}
		if (a == size)
		{
			continue;
		}
		_putchar('\n');
		}
	}
	_putchar('\n');
}
