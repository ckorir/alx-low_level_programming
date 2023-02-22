#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: always success
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
	if ((a % 3 == 0) || (a % 5 == 0))
	{
	b += 1;
	}
	a++;
	}
	printf("%d\n", b);
	return (0);
}
