#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string to be tested
 *
 * @accept: string to test argument s
 *
 * Return: pointer to s
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != 0; a++)
	{
	}
	for (b = 0; b <= a; b++)
	{
		for (c = 0; accept[c] != 0; c++)
		{
			if (s[b] == accept[c])
			{
				s = &s[b];
				return (s);
			}
		}
		if (s[b] == 0)
		{
			s = '\0';
			break;
		}
	}
	return (s);
}
