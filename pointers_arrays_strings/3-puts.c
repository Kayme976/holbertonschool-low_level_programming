#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *@str: pointer to the string to print
 *
 */

void _puts(char *str)

{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
