#include "main.h"

/**
 * times_table - Prints the 9 times table starting with 0.
 *
 * Return: Always 0
 *
 * c = colonne
 * l = ligne
 * r = resultat
 *
 */

void times_table(void)
{
	int c;
	int l;

	for (c = 0; c <= 9; c++)
	{
		_putchar('0');

		for (l = 1 ; l <= 9; l++)
		{
			int r = c * l;

			_putchar(',');
			_putchar(' ');

			if (r < 10)
			{
				_putchar(' ');
				_putchar(r + '0');

			}
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
