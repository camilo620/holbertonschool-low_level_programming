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
 */

int **alloc_grid(int width, int height)
{
	int *c;
	int b;
	int counter;
Int a**;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	c = malloc((width * height) * sizeof(int));

	if (c == 0)
	{
		return (NULL);
	}

	for (counter = 0; counter < height; counter++)
	{
		for (b = 0;b < width; b++)
		{
			c[counter][b] = '0';
		}
	}
a = &c
	return (a);
}
