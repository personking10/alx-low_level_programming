#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _lengtak - a function takes length
 * @st1: the string
 * Return: length of @st1
 */
int _lengtak(const char *st1)
{
	int leng = 0;

	while (*st1++)
		leng++;
	return (leng);
}

/**
 * _copystring - return a copy
 * @sr1: string copied
 * @de1: the copied here
 * Return: @de1
 */
char *_copystring(char *de1, char *sr1)
{
	int i;

	for (i = 0; sr1[i]; i++)
		de1[i] = sr1[i];
	de1[i] = '\0';

	return (de1);
}




/**
 * new_dog - creating new doggiee
 * @name: it's name of doggiee
 * @age: his age of the doggiee
 * @owner: his owner of the doggiee
 * Return:struct
 *           Null if the function fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_lengtak(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_lengtak(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _copystring(dog->name, name);
	dog->age = age;
	dog->owner = _copystring(dog->owner, owner);
	return (dog);
}
