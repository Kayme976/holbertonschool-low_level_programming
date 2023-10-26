#include "main.h"

/**
 * *_strncpy - that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, size_src = 0;

	while (src[size_src] != '\0')
	{
		size_src++;
	}

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if (i < size_src)
	{
		dest[i] = '\0';
	}

	return (dest);
}
