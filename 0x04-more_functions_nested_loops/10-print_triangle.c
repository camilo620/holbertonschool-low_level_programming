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
	int file;
	int col;
	int space;
	int hash;

	for (file = 0; file < size; file++)
	{
		col = size - 1 - file;
		for (space = size - 1 - file; space >= 0; space--)
		{
			_putchar(' ');
		}
		for (hash = size - col; hash > 0; hash--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
