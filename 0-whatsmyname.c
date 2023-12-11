#include <stdio.h>
#inlclude "main.h"

/**
 * main - that prints the name of the program
 * @argc: number of arguments
 * @atgv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
