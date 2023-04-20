#include "variadic_functions.h"

/**
 * sum_them_all - sums
 * @n: nums
 * @...: ints
 * Return: ints
 */
int sum_them_all(const unsigned int n, ...)
{
	int mos = 0, q = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (q--)
		mos += va_arg(ap, int);
	va_end(ap);
	return (mos);
}
