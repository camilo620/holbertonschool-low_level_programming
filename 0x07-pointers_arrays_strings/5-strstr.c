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

	if (!(needle[1] == 0))
	{

		for (a = 0; haystack[a] != 0; a++)
		{
			for (b = 0; needle[b] != 0 && haystack[a] != 0; b++)
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
				break;
			}
		}
	}
	return (haystack);
}
