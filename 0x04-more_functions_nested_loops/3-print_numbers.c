#include "holberton.h"
/**
 * print_numbers - prints numbers
 *
 * Return: void
 *
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
