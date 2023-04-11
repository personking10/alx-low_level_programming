#include "main.h"
/**
 * *create_array - create array of chars
 * @size: size of array
 * @c: char
 * Return: pointer to the array intialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *mos = malloc(size);

	if (size == 0 || mos == 0)
		return (0);

	while (size--)
		mos[size] = c;

	return (mos);
}
