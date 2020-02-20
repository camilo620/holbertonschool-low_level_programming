#include "holberton.h"
/**
 * cap_string - capitalize a string
 *
 * @s: string to be capitalized
 *
 * Return: string capitalized
 *
 */

char *cap_string(char *s)
{
	int a;

	for (a = 0; s[a] != 0; a++)
	{
		if (a == 0 && (s[a] > 96 && s[a] < 123))
		{
			s[a] = s[a] - 32;
		}
		else if (s[a] == ',' || s[a] == ';' || s[a] == '.' || s[a] == '!' ||
				s[a] == '?' || s[a] == '"' || s[a] == '(' ||
				s[a] == ')' || s[a] == '{' || s[a] == '}' ||
				s[a] == ' ' || s[a] == '\t' || s[a] == '\n')
		{
			a++;
			if (s[a] > 96 && s[a] < 123)
			{
				s[a] = s[a] - 32;
			}
			a--;
		}
	}
	return (s);
}
