#include "main.h"
/**
 * *_strdup - return a pointer to new space in memory
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int ni = 0, sz = 0;
	char *mos;

	if (str == NULL)
		return (NULL);

	for (; str[sz] != '\0'; sz++)
		;

	mos = malloc(sz * sizeof(*str) + 1);

	if (mos == 0)
		return (NULL);

	else
	{
		for (; ni < sz; ni++)
			mos[ni] = str[ni];
	}
	return (mos);
}
