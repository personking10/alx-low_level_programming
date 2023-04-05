#include "main.h"
/**
 * is_prime_number - show if the number is prime
 * @n: int
 * @gyy: int
 * Return: 0 or 1
 */

int chprime(int n, int gyy);
int is_prime_number(int n)
{
	return (chprime(n, 2));
}
/**
 * chprime - check negative numb
 * @n: int
 * @gyy: int
 * Return: int
 */

int chprime(int n, int gyy)
{
	if (gyy >= n && n > 1)
	{
		return (1);
	}
	else if (n % gyy == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (chprime(n, gyy + 1));
}
