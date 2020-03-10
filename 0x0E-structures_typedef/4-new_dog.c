#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

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
/**
 * new_dog - create a new structure based on dog_t
 *
 * @name: name of the dog
 *
 * @age: age of the dog
 *
 * @owner: owner of the dog
 *
 * Return: pointer to new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		return (NULL);
	}
	p->name = _strdup(name);
	if (p->name == NULL)
	{
		free(p->name)
		return(NULL);
	}
	p->age = age;
	p->owner = _strdup(owner);
	if (p->owner == NULL)
	{
		free(p->owner);
		return (NULL);
	}

	return (p);
}
