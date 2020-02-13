#include "holberton.h"
/**
 * _isdigit - check if the character input is a digit
 *
 * @c: character to be tested
 *
 * Return: 1, 0 depending if is a digit or not
 *
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
