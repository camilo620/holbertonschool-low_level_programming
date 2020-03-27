#include "holberton.h"
/**
 * flip_bits - number of bits you need to flip from one number to another
 * @n: number 1
 * @m: number 2;
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
    unsigned long int hold;

	hold = n ^ m;

	for (i = 0; hold != 0; hold >>= 1)
    {
		if ((hold & 1) == 1)
        {
			i++;
        }
    }
	return (i);
}