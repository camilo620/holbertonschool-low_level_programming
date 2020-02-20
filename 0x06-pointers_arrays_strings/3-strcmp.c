#include "holberton.h"
/**
 * _strcmp - compares 2 strings
 *
 * @s1: string to be compared
 *
 * @s2: string compared to
 *
 * Return: difference in ascii value
 *
 */

int _strcmp(char *s1, char *s2)
{
	int a;
	int b = 0;

		for (a = 0; s1[a] != 0; a++)
		{
			if (s1[a] < s2[a])
			{
				b = s2[a] - s1[a];
				break;
			}
			else if (s1[a] > s2[a])
			{
				b = s2[a] - s1[a];
				break;
			}
			else
			{
				break;
			}
		}
	return (b);
}
