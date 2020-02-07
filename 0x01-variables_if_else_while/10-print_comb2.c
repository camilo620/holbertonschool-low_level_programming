#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	int n = '0';
	int n2;
	int spc = ' ';
	int comma = ',';

	while (n <= '9')
	{
	n2 = '0';
		while (n2 <= '9')
		{
		putchar(n);
		putchar(n2);
		if (!(n == '9' && n2 == '9'))
			{
			putchar(comma);
			putchar(spc);
			}
		n2++;
		}
	n++;
	}
	putchar('\n');
	return (0);
}
