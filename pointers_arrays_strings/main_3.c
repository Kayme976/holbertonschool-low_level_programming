#include <stdio.h>

char *_strncpy(char *, char *, int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;
	int i;

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '-';
	s1[i] = '\0';
	printf("%s\n", s1);
	p = _strncpy(s1, "", 4);
	printf("%s\n", s1);
	printf("%s\n", p);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
