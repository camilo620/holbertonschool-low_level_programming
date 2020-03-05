#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - change size of an allocated memory
 *
 * @ptr: pointer to memory to be changed
 *
 * @old_size: old size of memory
 *
 * @new_size: new size of memory
 *
 * Return: pointer to new allocated memory
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int counter;
	unsigned int *holder;
	unsigned int *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	holder = ptr;
	if (new_size < old_size)
	{
		for (counter = 0; counter <= new_size; counter++)
			new_ptr[counter] = holder[counter];
	}
	if (new_size > old_size)
	{
		for (counter = 0; counter <= old_size; counter++)
			new_ptr[counter] = holder[counter];
	}
	free(ptr);
	return (new_ptr);
}
