#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @i: The number to be computed
 * Return: Abdolute value or zero
 */
int _abs(int i)
{
	if (i < 0)
	{
	int abs_val;

	abs_val = i * -1;
	return (abs_val);
	}
	return (i);
}
