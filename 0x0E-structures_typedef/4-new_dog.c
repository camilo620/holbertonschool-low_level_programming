#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
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
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
