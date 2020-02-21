#include "holberton.h"
/**
 * leet - translate a string into leet code
 *
 * @s: string to be translated
 *
 * Return: string converted
 *
 */

char *leet(char *s)
{
	int b;
	int c;

	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (b = 0; s[b] != 0; b++)
	{
		for (c = 0; a[c] != 0; c++)
		{
			if (a[c] == s[b])
			{
				s[b] = leet[c];
			}
		}
	}
	return (s);
}
