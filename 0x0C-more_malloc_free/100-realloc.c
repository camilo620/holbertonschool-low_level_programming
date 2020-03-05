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
	char *holder;
	char *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	holder = ptr;
	for (counter = 0; counter < new_size && counter < old_size; counter++)
		new_ptr[counter] = holder[counter];
	free(ptr);
	return (new_ptr);
}
