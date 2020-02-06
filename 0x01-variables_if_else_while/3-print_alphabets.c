#include <stdio.h>

/**
 * main - print the alphabet in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	char upperal[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int u = 0;
	char upper;

	while (u < 52)
	{
	upper = upperal[u];
	u++;
	putchar (upper);
	}
	putchar ('\n');
	return (0);
}
