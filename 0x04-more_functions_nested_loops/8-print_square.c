#include "holberton.h"
/**
 * print_square - prints a square
 *
 * @size: size of the square
 *
 * Return: void
 *
 */

void print_square(int size)
{
	int side_a;
	int side_b;

	if (!(size > 0))
	{
	for (side_b = 0; side_b < size; side_b++)
	{

		for (side_a = 0; side_a < size; side_a++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

