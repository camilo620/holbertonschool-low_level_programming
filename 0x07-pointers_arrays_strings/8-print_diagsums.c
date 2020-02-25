#include "holberton.h"
#include <stadio.h>
/**
 * print_diagsum - prints a sum diagonal
 *
 * @a: matrix of integers
 *
 * @size: size of the square
 *
 * Return: void
 *
 */

void print_diagsums(int *a, int size)
{
	int i, incre;
	int suma1 = 0, suma2 = 0;

	for (i = 0, incre = 0; i < size; i++, incre++)
	{
		suma1 += *(a + (size * i) + incre);
	}
	for (i = 0, incre = 0; i < size; i++, incre++)
	{
		suma2 += *(a + (size * (i + 1)) - (incre + 1));
	}

	printf("%d, %d\n", suma1, suma2);
}
