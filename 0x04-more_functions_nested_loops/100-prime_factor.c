#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */
int main(void)
{
	long a, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (a = 1; a <= square; a++)
	{
	if (num % a == 0)
	{
	maxf = num / a;
	}
	}
	printf("%d\n", maxf);
	return (0);
}
