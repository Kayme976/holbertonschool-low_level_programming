#include "main.h"

/**
 * print_rev - prints a string, followed by a new line, to stdout.
 *@s: pointer to the string to print
 *
 */

void print_rev(char *s)

{
	int k = 0, a = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	for (a = k - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
