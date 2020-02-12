#include "holberton.h"
/**
  * print_sign - prints sign + for n > 0, - for n < 0 and 0 for n = 0
  *
  * Return: 0, -1, 1 if n = or < or > 0
  *
  * @n: character to be test
  */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
