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

	for (contador = 0; s1[contador] != 0; contador++)
	{
	}
	for (contador2 = 0; s2[contador2] != 0; contador2++)
	{
	}
	a = malloc((contador + contador2) * sizeof(char) + 1);

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
