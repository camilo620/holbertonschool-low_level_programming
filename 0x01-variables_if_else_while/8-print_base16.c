#include <stdio.h>

/**
 * main - prints all chars of base 16
 *
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int al = 'a';

	while (n <= '9')
	{
	putchar(n);
	n++;
	}
	while (al <= 'f')
	{
	putchar(al);
	al++;
	}
	putchar('\n');
	return (0);
}
