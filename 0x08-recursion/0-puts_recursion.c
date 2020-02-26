#include "holberton.h"
/**
 * _puts_recursion - prints a string using recursion
 *
 * @s: string to be printed
 *
 * Return: void
 *
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (!(s[a] == 0))
	{
		_putchar(s[a]);
		a++;
		_puts_recursion(s + a);
	}
	else
	{
		_putchar('\n');
	}
}
