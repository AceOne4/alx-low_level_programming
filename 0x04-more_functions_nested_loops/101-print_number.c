#include "main.h"
#include <stdio.h>

/**
 * print_number - print numbers
 * @n: number will be printed
 */
void print_number(int n)
{
	unsigned int k = n;

	if (n < 0)
	{
		k = -k;
		_putchar('_');
	}
	if ((k / 10) > 0)
		print_number(k / 10);
	_putchar((unsigned int) k % 10 + '0');
}

