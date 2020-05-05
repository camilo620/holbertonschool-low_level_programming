#include "holberton.h"
/**
 * _strstr - search for an exact substring
 *
 * @haystack: string to be tested
 *
 * @needle: substring to be searched
 *
 * Return: pointer to substring found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	if (needle[0] != 0)
	{

		for (a = 0; haystack[a] != 0; a++)
		{
			for (b = 0; needle[b] != 0; b++)
			{
				if (haystack[a] != needle[b])
				{
					break;
				}
				else if (haystack[a] == needle[b])
				{
					a++;
				}

			}
			if (needle[b] == 0)
			{
				haystack = &haystack[a - b];
				return (haystack);
			}
		}
		if (haystack[a] == 0)
		{
			haystack = '\0';
		}
	}
	return (haystack);
}
