#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - return length of string
 * @s: pointer to string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int a;

	if (*s > '\0')
	{
		a += _strlen_recursion(s + 1) + 1;
	}
	return (a);
}
