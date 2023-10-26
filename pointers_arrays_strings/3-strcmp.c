#include "main.h"

/**
 * _strcmp - that compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: less than 0 if k1 is less than k2
 * more than 0 if less thna
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
