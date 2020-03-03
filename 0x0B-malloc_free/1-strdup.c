#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - copy a string with malloc
 *
 * @str: string to be copied
 *
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *string;
	int a;
	int b;

	if (str == 0)
	{
		return (NULL);
	}

	for (a = 0; str[a] != 0; a++)
	{
	}

	string = malloc(a * sizeof(char) + 1);

	if (string == NULL)
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
