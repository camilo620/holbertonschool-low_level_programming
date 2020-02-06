#include <stdio.h>

/**
 * main - prints all possible combination of single-digit-numbers
 *
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int spc = ' ';
	int comma = ',';

	while (n <= '9')
	{
	putchar(n);
	if (n < '9')
		{
		putchar(comma);
		putchar(spc);
		}
	n++;
	}
	putchar('\n');
	return (0);
}
