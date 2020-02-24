#include "holberton.h"
/**
 * _memcpy - copy to buffer from source
 *
 * @dest: buffer
 *
 * @src: source to be copied from
 *
 * @n: number of lines to be copied
 *
 * Return: buffer pointer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a <= n && src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
