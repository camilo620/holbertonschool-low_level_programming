#include "holberton.h"
/**
 * rev - prints in reverse
 * @n: number being transformed
 * Return: void
 */
void rev(unsigned long int n)
{
	if (n == 0)
		return;
	rev(n >> 1);
	_putchar((n & 1) + '0');
}
/**
 * print_binary - prints a binary number
 * @n: number to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		rev(n);
	}
}
