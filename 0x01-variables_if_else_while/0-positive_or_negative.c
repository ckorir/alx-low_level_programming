#include <stdio.h>

/**
 * main - Determines if a number is positive, 0 or negative
 *
 * Return: Always 0
 */

int main(void)
{
	int x;

	if (x > 0)
	{
		printf("%d is positive", x);
	}
	else if (x == 0)
	{
		printf("%d is zero", x);
	}
	else
	{
		printf("%d is negative", x);
	}

	return (0);
}
