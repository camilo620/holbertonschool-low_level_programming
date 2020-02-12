#include "holberton.h"
/**
 * print_last_digit - print last digit of the value
 *
 * @n: number to be tested
 *
 * Return: 1 in the lowercase, 0 fo other.
 *
 */

int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (lastdigit < 0)
	{
		lastdigit = 0 - lastdigit;
	}

	_putchar(lastdigit + '0');
	return (lastdigit);
}
