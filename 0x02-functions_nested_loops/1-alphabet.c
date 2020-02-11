#include "holberton.h"

/**
 * print_alphabet - oddly as it sounds, it prints the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alphabet = 97;

	while (alphabet <= 122)
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
