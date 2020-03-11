#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each member of an aray
 *
 * @array: array to be used
 *
 * @size: size of the array
 *
 * @action: pointer to function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (action == NULL || array == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
