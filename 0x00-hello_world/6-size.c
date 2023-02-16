#include <stdio.h>

/**
 * Main - prints the size of various types on the
 * computer it is compiled and run on
 *
 * Return: Always 0
 */

int main(void)
{

	printf("Size on an int: %zu bytes\n", sizeof(int));
	printf("Size on a char: %zu bytes\n", sizeof(char));
	printf("Size on a float: %zu bytes\n", sizeof(float));
	printf("Size on a long int: %zu bytes\n", sizeof(long int));
	printf("Size on a long long int: %zu bytes\n", sizeof(long long int));

	return (0);
}
