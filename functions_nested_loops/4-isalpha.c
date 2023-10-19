#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: The charachter to be checked
 * Return: 1 for alphabetic character or 0 for anything else 
 */
int isalpha(int c);
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
