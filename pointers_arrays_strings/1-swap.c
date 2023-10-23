#include "main.h"

/**
 * swap_int - takes a pointer to an int
 * @a: var going to 98
 * @b: var going to 42
 * Return: Always.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
