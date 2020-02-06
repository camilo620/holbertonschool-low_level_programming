#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: 0
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
	if (!(letter == 'e' || letter == 'q'))
		{
		putchar(letter);
		}
	letter++;
	}
	putchar('\n');
	return (0);
}
