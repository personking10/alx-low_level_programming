#include "function_pointers.h"
/**
 * print_name - printing a name
 * @name: name of the named string
 * @f: the function pointer has been printed
 * Return: void
 */
void print_name(char *name, void(*f)(char *))
{
	if (name && f)
		f(name);
}
