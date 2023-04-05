#include "main.h"
/**
 * _sqrt_recursion - return square root of number
 * @n: int
 * @gy: sq root
 * Return: int
 */
int sq(int n, int gy);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}
/**
 * sq - find sq root
 * @n: int
 * @gy: sq root
 * Return: int
 */
int sq(int n, int gy)
{
	if (gy * gy == n)
	{
		return (gy);
	}
	else if (gy * gy < n)
	{
		return (sq(n, gy + 1));
	}
	else
		return (-1);
}
