#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Determines if a number is positive, 0 or negative
 *
 * Return: Always 0
 */

int main(void)
{
        int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
        if (i > 0)
        {
                printf("%d is positive", i);
        }
        else if (i == 0)
        {
                printf("%d is zero", i);
        }
        else
        {
                printf("%d is negative", i);
        }

        return (0);
}
