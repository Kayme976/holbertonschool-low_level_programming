#include "variadic_functions.h"

/**
 * print_numbers - that printing numbers with var functions
 * @separator: char
 * @n: unsigned int
 * Retrun: 0
 */

void print_numbers(const char*separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (i < n - 1 && separator != NULL)
				printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
