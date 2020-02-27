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

	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks if s is palindrome
 *
 * @s: string to be checked
 * @size: size of the string
 * @i: counter
 *
 * Return: 1 for palindrome, 0 if not
 *
 */

int palindrome(char *s, int size, int i)
{
	if (i >= size)
	{
		return (1);
	}
	else if (s[size] == s[i])
	{
		return (palindrome(s, size - 1, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks for palindromes
 *
 * @s: string to be checked
 *
 * Return: result of palindrome
 *
 */

int is_palindrome(char *s)
{
	int size = _strlen_recursion(s);
	int h = palindrome(s, (size - 1), 0);

	return (h);
}
