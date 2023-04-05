#include "main.h"
/**
 * _strlen_recursion - return length of string
 * @s: pointer to string
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int a;

	a = _strlen_recursion(*s);
	printf("%c\n", a);
}
