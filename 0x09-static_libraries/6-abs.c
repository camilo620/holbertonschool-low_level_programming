#include "holberton.h"
/**
 * _abs - test a number and says its absolute value
 *
 * @value: number to test
 *
 * Return: Absolute value
 */
int _abs(int value)
{
	if (value >= 0)
		return (value);

	else
		return (0 - value);
}
