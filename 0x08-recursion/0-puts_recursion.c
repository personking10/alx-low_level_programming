#include "main.h"
/**
 * _puts_recursion - printing string with a new line
 * @s: pointer to the string
 * Return: void
 */

void _puts_recursion(char *ps)
{
	if (*ps = '\0')
	{
		_Putchar('\n');
	}
	else
	{
		_Putchar(*ps);
		_puts_recursion(ps + 1);
	}

}
