#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 *
 * Return: void
 *
 * @n: number of lines
 *
 */

void print_diagonal (int n)
{
	int n2;
	int n3;

	if (n > 0)
	{
		n2 = 1;
		while (n2 < n)
		{
			n3 = 1;
			while (n3 < n2)
			{
				_putchar(' ');
				n3++;
			}
			_putchar('\\');
			_putchar('\n');
			n2++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
