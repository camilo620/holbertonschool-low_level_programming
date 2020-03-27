#include "holberton.h"
#include "holberton.h"
/**
 * clear_bit - erase a bit
 * @n: number to be changed
 * @index: index of the bit to be changed
 * Return: 1 if succesful -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64 || !n)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
