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
	int a = sizeof(str);
	int b;

	string = malloc(a * sizeof(char));

	if (string == NULL || str == 0)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		string[b] = str[b];
	}
	string[b] = '\0';

	return (string);
}
