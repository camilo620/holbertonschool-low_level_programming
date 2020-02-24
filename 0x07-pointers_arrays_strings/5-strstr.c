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
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0; haystack != 0; a++)
	{
		for (b = 0; needle != 0; b++)
		{
			if (haystack[a] != needle [b])
			{
				break;
			}
			else
			{
				haystack = &haystack[a];
				return (haystack);
			}
		}
	}
	return (0);
}
