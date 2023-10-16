#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if (n >= 5)
        {
		printf("Last digit of %d is %d greater than 5\n", n, n%10);
        }
        if (n == 0)
        {
                printf("Last digit of %d is 0 %d and is 0\n", n, n%10);
        }
        if (n < 6 && n != 0)
        {
                printf("Last digit of %d is %dless than 6 and not 0\n", n, n%10);
        }
        return (0);
}
