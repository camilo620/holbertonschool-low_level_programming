#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int l = 0;
	char let;

	while (l < 26)
	{
	let = alphabet[l];
	l++;
	putchar(let);
	}
	putchar('\n');
	return (0);
}
