#include "holberton.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a10 = 0;

	while (a10 < 10)
	{
		int al = 97;

		while (al <= 122)
		{
			_putchar(al);
			al++;
		}
	_putchar('\n');
	a10++;
	}
}
