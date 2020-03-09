#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialice an structure
 *
 * @d: pointer to structure to initialice
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (dog == NULL)
	{
		return (1);
	}
	struct dog *p;

	p = d;

	p->name = name;
	p->age = age;
	p->owner = owner;
}

