#include "holberton.h"
/**
 * swap_int - swap values between variables
 *
 * Return: void
 *
 * @a: pointer a
 *
 * @b: pointer b
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
