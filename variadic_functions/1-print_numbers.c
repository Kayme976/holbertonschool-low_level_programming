#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - that printing numbers with var functions
 * @separator: char
 * @n: unsigned int
 * Retrun: 0
 */

void print_numbers(const char*separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr,unsigned int));

		if (i < n - 1 && separator != NULL)
				printf("%s", separator);
	}
	va_end(ptr);

	printf("\n");
}
