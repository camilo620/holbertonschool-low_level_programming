#include "holberton.h"
/**
 * _strlen_recursion - prints the lenght of a string
 *
 * @s: string to be sized
 *
 * Return: number of recursions
 *
 */

int _strlen_recursion(char *s)
{

	if (*s != 0)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
