#include "function_pointers.h"

/**
 * array_iterator - checking array in function pointer
 * @array: my array
 * @size: the size of my array
 * @action: the function pointer exscuted
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *mostafa = array + size - 1;

	if (array && size && action)
	{
		while (array <= mostafa)
		{
			action(*array++);
		}
	}
}
