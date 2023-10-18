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
void print_alphabet_x10(void);
{
        int i;

        for (i = 0; i <= 10; i++)
        {
                for (i = 97; i <= 122; i++)
                {
                        _putchar(i);
                }
                _putchar('\n')
        }
}
