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
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	int contador;
	int contador2;
	char *a;

	if (s1 == 0 || s2 == 0)
	{
		return (NULL);
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
