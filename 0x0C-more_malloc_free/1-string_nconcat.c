#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings at a new allocated memory
 *
 * @s1: string one to be concatenated
 *
 * @s2: string two to be concatenated
 *
 * @n: maximum number of characters of s2 to be concatenated
 *
 * Return: pointer to allocated memory
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int contador;
	unsigned int contador2;
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
	a = malloc((contador + n + 1) * sizeof(char));

	if (a == NULL)
	{
		return (NULL);
	}

	for (contador = 0; s1[contador] != 0; contador++)
	{
		a[contador] = s1[contador];
	}
	for (contador2 = 0; contador2 < n && s2[contador2] != 0; contador2++)
	{
		a[contador] = s2[contador2];
		contador++;
	}
	a[contador] = '\0';

	return (a);
	
}
