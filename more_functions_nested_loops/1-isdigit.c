#include "main.h"

/**
 * _isdigit - that checks for a digit (0 through 9).
 * @c: is my var can be digit or not
 * Return: 1 if it's a digit (0-9) , 0 if it's not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
