#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * mos - check code
 * @a: num of arg
 * @z: argumets
 * Return: Always 0
 */
int mos(int a, char **z)
{
	char *k = (char *)mos;
	int q;

	if (a != 2)
		printf("Error\n"), exit(1);
	q = atoi(z[1]);
	if (q < 0)
		printf("Error\n"), exit(2);

	while (q--)
		printf("%02hhx%s", *k++, q ? " " : "\n");
	return (0);
}

