#include "holberton.h"
/**
 * times_table - prints the table of 9
 *
 * Return: void
 */

void times_table(void)
{
	int n1 = 0;
	int n2;
	int mult;

	while (n1 <= 9)
	{
		_putchar('0');
		n2 = 1;

		while (n2 <= 9)
		{
			_putchar(',');
			_putchar(' ');
			mult = n1 * n2;

			if (mult < 10)
			{
				_putchar(' ');
				_putchar(mult + '0');
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			n2++;
		}
		_putchar('\n');
		n1++;
	}
}
