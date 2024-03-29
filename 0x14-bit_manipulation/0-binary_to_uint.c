#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base_one;

	if (!b)
	return (0);
	i = 0;
	for (len = 0; b[len] != '\0'; len++)
	;
	for (len--, base_one = 1; len >= 0; len--, base_one *= 2)
	{
	if (b[len] != '0' && b[len] != '1')
	{
	return (0);
	}
	if (b[len] & 1)
	{
	i += base_one;
	}
	}
	return (i);
}
