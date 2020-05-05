#include "holberton.h"
/**
 * _strncat - concatenates only n bytes of source into destiny
 *
 * @dest: destiny string
 *
 * @src: source string
 *
 * @n: number of bytes to be concatenate
 *
 * Return: destiny
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; b < a && src[b] != 0; b++)
	{
		if (!(b == n))
		{
			dest[a + b] = src[b];
		}
	}
	dest[a + b] = '\0';
	return (dest);
}
