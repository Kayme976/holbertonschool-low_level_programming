#include "main.h"

/**
 * _isupper -  that checks for uppercase character.
 * @c: is my var
 * Return: to sucess
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

