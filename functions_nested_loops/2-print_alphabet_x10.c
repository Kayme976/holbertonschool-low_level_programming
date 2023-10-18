#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - program that prints _putchar, followed by new line
 *
 *
 *
 *
 */
void print_alphabet_x10(void)
{
        int i;

	/**
	 * tu peux pas utiliser i pour les deux boucles for 
	 * int nimporte quelle lettre 
	 * et tu utilise la nouvelle lettre dans ton deuxieme for 
	 */
        for (i = 0; i <= 10; i++)
        {
                for (i = 97; i <= 122; i++)
                {
                        _putchar(i);
                }
                _putchar('\n');
        }
}
