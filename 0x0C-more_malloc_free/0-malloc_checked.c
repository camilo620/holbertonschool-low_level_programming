#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - creates an allocated memory using malloc
 *
 * @b: size of bytes required in the allocated memory
 *
 * Return: pointer to allocated memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
