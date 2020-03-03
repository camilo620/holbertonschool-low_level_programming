#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array
 *
 * @size: size of array
 *
 * @c: character to initialice
 *
 * Return: pointer to array
 *
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size * sizeof(char));
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}

	if (a == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		a[b] = c;
	}

	a[b] = '\0';

	return (a);
}
