#include "main.h"

/**
 * _strlen - program to find length of string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int sz = 0;

	for (; s[sz] != '\0'; sz++)
		;
	return (sz);
}

/**
 * *str_concat - concate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, ni;
	char *mos;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	mos = malloc((sz1 + s2) * sizeof(char) + 1);
	if (mos == 0)
		return (0);

	for (ni = 0; ni <= sz1 + sz2; ni++)
	{
		if (ni < sz1)
			mos[ni] = sz1[ni];
		else
			mos[ni] = sz2[ni - sz1];
	}
	mos[ni] = '\0';
	return (mos);
}
