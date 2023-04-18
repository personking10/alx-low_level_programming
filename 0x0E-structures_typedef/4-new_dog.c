#include "dog.h"
#include <stdlib.h>

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
	dog_t *mostafa;

	if (!name || age < 0 || !owner)
		return (NULL);

	mostafa = (dog_t *) malloc(sizeof(dog_t));
	if (mostafa == NULL)
		return (NULL);

	mostafa->name = malloc(sizeof(char) * (_lengtak(name) + 1));
	if ((*mostafa).name == NULL)
	{
		free(mostafa);
		return (NULL);
	}
	mostafa->owner = malloc(sizeof(char) * (_lengtak(owner) + 1));
	if ((*mostafa).owner == NULL)
	{
		free(mostafa->name);
		free(mostafa);
		return (NULL);
	}

	mostafa->name = _copystring(mostafa->name, name);
	mostafa->age = age;
	mostafa->owner = _copystring(mostafa->owner, owner);
	return (mostafa);
}
