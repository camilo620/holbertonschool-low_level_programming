#include "holberton.h"
#include <stdlib.h>
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
 *
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

	if (a == 0)
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
