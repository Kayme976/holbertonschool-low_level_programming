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

	i = 0;

	while (n >= src_length + i)
	{
		dest[src_length + i] = '\0';
		i++;
	}

	return (dest);
}
