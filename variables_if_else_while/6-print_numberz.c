#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 *
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x +'0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
