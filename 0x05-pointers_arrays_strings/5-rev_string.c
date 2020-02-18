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
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c;

	for (a = 0; s[a] != 0; a++)
	{
	}
	a -= 1;
	for (b = 0; b < a; b++)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
		a--;
	}
}
