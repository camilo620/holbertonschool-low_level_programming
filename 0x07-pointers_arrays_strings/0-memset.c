#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: destiny memory
 *
 * @b: constant byte
 *
 * @n: number of times to be filled
 *
 * Return: destiny memory pointer
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a <= n && s[a] != 0; a++)
	{
		s[a] = b;
	}
	return (s);
}
