#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - test an array for integers
 * @array: array to be tested
 * @size: size of the array
 * @cmp: pointer to function to test the array
 * Return: index of the first number to be succesfully checked by cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL || array == NULL)
		return (0);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
