#include "main.h"
/**
 * _sqrt_recursion - return square root of number
 * @n: int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (n * _sqrt_recursion(n - 1));
}
