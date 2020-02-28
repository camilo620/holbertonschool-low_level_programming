#include "holberton.h"
/**
  * _isupper - checks if a character is uppercase
  *
  * @c: character to be tested
  *
  * Return: 0, 1 depending if they aren't uppercase or actually are
  *
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
