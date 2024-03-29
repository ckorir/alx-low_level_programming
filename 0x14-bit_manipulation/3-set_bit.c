#include "main.h"

/**
 * set_bit - sets the value of a bit to 1.
 * @n: pointerof unsigned long int
 * @index: bit index
 * Return: 1 if working, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
	return (-1);
	m = 1 << index;
	*n = (*n | m);
	return (1);
}
