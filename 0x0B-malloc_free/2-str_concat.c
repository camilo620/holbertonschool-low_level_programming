#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - concatenates two arrays into a new malloc pointer
 *
 * @s1: first string to be copied
 *
 * @s2: second string to be concatenate
 *
 * Return: pointer to malloc string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int contador;
	int contador2;
	char *a;


	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (contador = 0; s1[contador] != 0; contador++)
	{
	}
	for (contador2 = 0; s2[contador2] != 0; contador2++)
	{
	}
	a = malloc((contador + contador2 + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (contador = 0; s1[contador] != 0; contador++)
	{
		a[contador] = s1[contador];
	}
	for (contador2 = 0; s2[contador2] != 0; contador2++)
	{
		a[contador] = s2[contador2];
		contador++;
	}
	a[contador] = '\0';

	return (a);
}
