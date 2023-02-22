#include "main.h"

/**
 * print_times_table - prints times table of input
 * @n: The value of the table to be printed
 * Return: table output
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	for (mult = 0; mult <= n; mult++)
	{
	prod = num * mult;
	if (prod <= 99)
	_putchar(',');
	_putchar(' ');
	if (prod <= 9)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');	
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}


