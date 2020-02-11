#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a[9] = "Holberton";
	int i = 0;
	int letter;

	while (i <= 8)
	{
	letter = a[i];
	_putchar(letter);
	i++;
	}
	_putchar('\n');
	return (0);
}
