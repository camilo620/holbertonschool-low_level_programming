#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; src[a] != 0; a++)
	{
	}
	for (b = 0; b < a; b++)
	{
		dest[b] = src[b];
	}
	if (b == a)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
