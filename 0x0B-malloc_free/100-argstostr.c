#include "main.h"
/**
 * _strlen - find length
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
 * *argstostr - descr
 * @ac: int
 * @av: argument
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, nac = 0, j = 0, camp = 0;
	char *sz;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, nac++)
		nac += _strlen(av[i]);

	sz = malloc(sizeof(char) * nac + 1);
	if (sz == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, camp++)
		{
			sz[camp] = av[i][j];
		}

		sz[camp] = '\n';
		camp++;
	}
	sz[camp] = '\0';
	return (sz);
}
