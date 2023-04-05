#include "main.h"
/**
 * _pow_recursion - return value of x power y
 * @x: base
 * @y: exposant
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int pwr;


	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}