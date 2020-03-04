#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - free memory from an array 2D
 *
 * @grid: array to be realese
 *
 * @height: size of array
 *
 * Return: void
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
