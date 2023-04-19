#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * mos - check code
 * @argc: num of arg
 * @argv: argumets
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *k = (char *)main;
	int q;

	if (argc != 2)
		printf("Error\n"), exit(1);
	q = atoi(argv[1]);
	if (q < 0)
		printf("Error\n"), exit(2);

	while (q--)
		printf("%02hhx%s", *k++, q ? " " : "\n");
	return (0);
}

