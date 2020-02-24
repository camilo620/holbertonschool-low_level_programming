#include "holberton.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: string to be tested
 *
 * @c: character to be searched
 *
 * Resturn: pointer to character
 *
 */

char *_strchr(char *s, char c)
{
	int a;
	int b;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (b = 0; b <= a; b++)
	{
		if (s[b] == c)
		{
			s = &s[b];
		}
	}
	return (s);
}
