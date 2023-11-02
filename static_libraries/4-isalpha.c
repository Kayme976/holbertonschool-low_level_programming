#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks for alphabetic character
 * @c: The charachter to be checked
 * _isalpha checks for alphabetic character
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	int temp;

	if (isalpha(c))
	{
		temp = 1;
	} else
	{
		temp = 0;
	}
	return (temp);

}
