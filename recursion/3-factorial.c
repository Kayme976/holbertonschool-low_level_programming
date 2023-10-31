#include "main.h"

/**
 * factorial - that returns a factorial of a number
 * @n: number to return tha factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
