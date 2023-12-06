#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - that allocates 1024 bytes for a buffer.
 * @file: the name of the newly-allocated buffer.
 * Return: a pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) *1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can' t write to %s\n
