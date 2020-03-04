#include <stdlib.h>
#include "holberton.h"
/**
 *
 *
 *
 *
 *
 *
 *
 */

char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c;
	char *string;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != 0; b++)
		{
		}
		c += b;
	}
	string = malloc(sizeof(char) * (ac + c + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for(a = 0, c = 0; a < ac; a++)
	{
		for (b = 0; av [a][b] != 0; b++)
		{
			string[c] = av[a][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	string[c] = 0;

	return (string);
}
