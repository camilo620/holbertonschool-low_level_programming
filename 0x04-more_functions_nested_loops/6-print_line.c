#include "holberton.h"
/**
 * print_line - draws a straight line
 *
 * Return: 0
 *
 * @n: number to be tested
 *
 */

void print_line(int n)
{
	int number = n;

	while (--number)
	{
		_putchar('_');
		number--;
	}
	_putchar('\n');
}
