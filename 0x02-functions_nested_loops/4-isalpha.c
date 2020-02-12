#include "holberton.h"
/**
 * _isalpha - Test if input character is alphabetic
 * @c: character to be tested
 *
 * Return: 1 in the alphabetic, 0 for other
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
