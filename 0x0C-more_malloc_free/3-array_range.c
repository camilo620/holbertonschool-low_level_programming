#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - create an array of size max - min
 *
 * @min: min size of array
 *
 * @max: max size of array
 *
 * Return: pointer to array
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int counter;
	int range;
	int a = 0;

	if (min > max)
	{
		return (NULL);
	}

	range = max - min;

	array = malloc(sizeof(int) * (range + 1));

	if (array == NULL)
	{
		return (NULL);
	}

	for (counter = min; a <= range; counter++, a++)
	{
		array[a] = counter;
	}
	array[a] = '\0';

	return (array);
}
