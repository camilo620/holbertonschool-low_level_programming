#include "holberton.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring
 *
 * @s: string to be tested
 *
 * @accept: prefix substring
 *
 * Return: counter of lenght
 *
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int b = 0;
	int c;

	for (a = 0; s[a] != ' ' && s[a] != 0; a++)
	{
		for (c = 0; accept[c] != 0; c++)
		{
			if (s[a] == accept[c])
			{
				b++;
				break;
			}
		}
	}
	return (b);
}
