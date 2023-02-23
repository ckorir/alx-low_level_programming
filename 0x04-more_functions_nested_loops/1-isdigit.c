#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: parameter to be checked for if it is a digit
 * Return: 1 if digit is found or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
