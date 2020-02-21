#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

char *rot13(char *s)
{
	int a;

	for (; s[a] != 0; a++)
	{
		for (; s[a] > 108 || s[a] > 76; a++)
		{
			s[a] = s[a] - 13;
		}

	}
	return (s);
}
