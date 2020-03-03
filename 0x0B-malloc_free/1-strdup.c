#include "holberton.h"
#include <stdlib.h>
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
 */

char *_strdup(char *str)
{
	char *string;
	int a;
	int b;

	for (a = 0; str[a] != 0; a++)
	{
	}

	string = malloc(a * sizeof(char));

	if (string == NULL || str == 0)
	{
		return (NULL);
	}
	for (b = 0; b < a; b++)
	{
		string[b] = str[b];
	}
	string[b] = '\0';

	return (string);
}
