#include "holberton.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: string to be tested
 *
 * @c: character to be searched
 *
 * Return: pointer to character
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
			break;
		}
		else if (s[b] == 0)
		{
			s = &s[b];
		}
	}
	return (s);
}
