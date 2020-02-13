#include "holberton.h"
/**
 * more_numbers - print 10 times 0-9 numbers
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int n = 0;
	int n2;

	while (n <= 9)
	{
		for (n2 = 0; n2 <= 14; n2++)
		{
			if (n2 >= 10)
			{
			_putchar((n2 / 10) + '0');
			}
			_putchar((n2 % 10) + '0');
		}
		_putchar('\n');
		n++;
	}
}
