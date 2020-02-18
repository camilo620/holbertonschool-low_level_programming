#include "holberton.h"
/**
 * _puts - prints a string to stdout
 *
 * Return: void
 *
 * @str: string to be printed
 *
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
