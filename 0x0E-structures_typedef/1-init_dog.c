#include "dog.h"
#include <stdio.h>

/**
 * init_dog - insialize struct named dog
 * @d: doggiee initializee
 * @name: doggiee name
 * @age: doggieee age
 * @owner: dogieee owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
