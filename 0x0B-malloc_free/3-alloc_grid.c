#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - create a 2D array with variable memory
 *
 * @width: width of the matrix
 *
 * @height: height of the matrix
 *
 * Return: pointer to the array if succes or NULL if failure
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

	a = malloc(height * sizeof(int *));

	if (a == 0)
	{
		return (NULL);
	}

	for (counter = 0; counter < height; counter++)
	{
		a[counter] = malloc(width * sizeof(int));
		if (a[counter] == 0)
		{
			for (b = 0; b < counter; b++)
			{
			free(a[b]);
			}
			free(a);
			return (NULL);			
		}
		for (b = 0; b < width; b++)
		{
			a[counter][b] = 0;
		}
	}
	return (a);
}
