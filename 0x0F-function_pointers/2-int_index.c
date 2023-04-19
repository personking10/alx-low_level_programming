#include "function_pointers.h"
/**
 * int_index - searching for integers in array
 * @array: my array
 * @size: the size of my array
 * @cmp: the comparing function between them
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int xx = 0;

	if (array && size && cmp)
		while (xx < size)
		{
			if (cmp(array[xx]))
				return (xx);
			i++;
		}
	return (-1);
}
