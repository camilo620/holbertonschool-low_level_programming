#include "holberton.h"
/**
 * string_toupper - changes all the lowercase in a string for uppercase
 *
 * @s: string to be changed
 *
 * Return: changed string
 *
 */

char *string_toupper(char *s)
{
	int a = 0;

	for (a = 0; s[a] != 0; a++)
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}
	}
	
	return (s);
}
