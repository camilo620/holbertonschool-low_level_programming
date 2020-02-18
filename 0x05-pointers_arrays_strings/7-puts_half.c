#include "holberton.h"
/**
 * puts_half - prints last half of the string lenght
 *
 * @str: string to be printed
 *
 * Return: void
 *
 */

void puts_half(char *str)
{
	int a;
	int b;
	int odd;

	for (a = 0; str[a] != 0; a++)
	{
	}

	odd = a;

	if (a % 2 != 0)
	{
		a++;
	}

	for (b = (a / 2); b < odd; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
