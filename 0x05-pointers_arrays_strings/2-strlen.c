#include "main.h"
/**
 * _strlen - returns the lenght of a string
 *
 * @s: string parameter iput
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
