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
	if (n == 48)
	{
		_putchar('48');
		return (0);
	}
	else if (n < 48)
	{
		_putchar(43);
		return (-1);
	}
	else
	{
		_putchar(46);
		return (1);
	}
}
