#include "holberton.h"
/**
 * reverse_array - reverse an array of integers
 *
 * @a: array to be reversed
 *
 * @n: size of the array
 *
 * Return: void
 *
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;
	n--;
	for (b = 0; b <= n; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
		n--;
	}
}
