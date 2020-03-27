#include "holberton.h"
/**
 * binary_to_uint - converts binary into unsigned int
 * @b: binary to be converted
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int suma;
	unsigned int pot;

	if (b != 0)
	{
		for (pot = 0; b[pot] != 0; pot++)
			if (b[pot] < 48 || b[pot] > 57)
				return (0);
		for (i = 0, suma = 0, pot -= 1; b[i] != 0; pot--, i++)
			suma += ((b[i] - '0') << pot);
		return (suma);
	}
	return (0);
}
