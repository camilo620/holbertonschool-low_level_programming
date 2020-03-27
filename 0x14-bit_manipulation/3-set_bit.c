#include "holberton.h"
/**
 * set_bit - change a bit at index
 * @n: number to be changed
 * @index: position to be changed
 * Return: 1 if success -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int i = 1;

	if (index > 64)
	{
		return (-1);
	}
	
	i = i << index;

	*n = (*n | i);

	return (1);
}
