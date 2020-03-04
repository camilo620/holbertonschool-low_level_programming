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
	int **a;
	int b;
	int counter;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(width * sizeof(int));

	if (a == 0)
	{
		return (NULL);
	}

	for (counter = 0; counter < width; counter++)
	{
		a[counter] = malloc(height * sizeof(int));
		if (a == 0)
		{
			return (NULL);
		}
	}
	for (counter = 0; counter < height; counter++)
	{
		for (b = 0; b < width; b++)
		{
			a[counter][b] = 0;
		}
	}
	return (a);
}
