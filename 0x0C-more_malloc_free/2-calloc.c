#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - creates an allocate memory string and fill it with 0
 *
 * @nmemb: number of bytes required
 *
 * @size: size of type of variable
 *
 * Return: pointer to allocate memory
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	void *p;
	unsigned int counter;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (a == NULL)
	{
		return (NULL);
	}

	p = a;

	for (counter = 0; counter < nmemb; counter++)
	{
		a[counter] = 0;
	}
	return (p);
}
