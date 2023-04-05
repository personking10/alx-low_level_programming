#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - printing string with a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
	}
	else
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}

}
