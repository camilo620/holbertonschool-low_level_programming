#include "holberton"
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

	if (n < 0)
	{
		n = 0 - n;
	}
	_putchar(lastdigit);
	return (lastdigit);
}
