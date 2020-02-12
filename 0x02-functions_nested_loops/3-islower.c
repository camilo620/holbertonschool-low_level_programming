#include "holberton.h"
/**
 * _islower - Test if input character is lowercase
 * @c: character to be tested
 *
 * Return: 1 in the lowercase, 0 fo other.
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
