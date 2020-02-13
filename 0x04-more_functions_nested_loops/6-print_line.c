#include "holberton.h"
/**
 * print_line - draws a straight line
 *
 * Return: void
 *
 * @n: number to be tested
 *
 */

void print_line(int n)
{
	int number = n;

	while (number--)
	{
		if (number < 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
