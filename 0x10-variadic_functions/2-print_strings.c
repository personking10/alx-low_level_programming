#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: strings
 * @n: nums
 * @...: strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int q = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	while (q--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
				q ? (separator ? separator : "") : "\n");
	va_end(ap);
}
