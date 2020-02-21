#include "holberton.h"
/**
 * rot13 - translate a string into ROT13
 *
 * @s: string to be translated
 *
 * Return: translated string
 *
 */

char *rot13(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
		for (; (s[a] >= 'a' && s[a] <= 'z') || (s[a] >= 'A' && s[a] <= 'Z'); a++)
		{
			if (s[a] > 'm' || (s[a] > 'M' && s[a] <= 'Z'))
			{
				s[a] = s[a] - 13;
				break;
			}
			s[a] = s[a] + 13;
		}
	}
	return (s);
}
