#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: nums
 * @...: ints
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	int q = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (q--)
		printf("%d%s", va_arg(ap, int),
				q ? (separator ? separator : "") : "\n");
	va_end(ap);
}
