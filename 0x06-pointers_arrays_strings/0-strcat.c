#include "holberton.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 *
 * @src: second string
 *
 * Return: destiny string
 *
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; b <= a && src[b] != 0; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
