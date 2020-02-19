#include "holberton.h"
/**
 * _strcpy - copy an array onto another one
 *
 * @dest: pointer to destination array
 *
 * @src: pointer to source array
 *
 * Return: destination pointer
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
