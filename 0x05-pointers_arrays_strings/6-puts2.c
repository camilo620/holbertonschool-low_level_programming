#include "holberton.h"
/**
 * puts2 - prints a string but every other character
 *
 * @str: string to be printed
 *
 * Return: void
 *
 */

void puts2(char *str)
{
	int a;
	int b;

	for (a = 0; str[a] != 0; a++)
	{
	}
	for (b = 0; b <= a; b++)
	{
		if (!(str[b] % 2 != 0))
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
