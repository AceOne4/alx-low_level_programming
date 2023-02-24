#include "main.h"

/**
 * print_diagonal - function print diagonal line
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int x = 0;

	int y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (x < n)
		{
			for (y = 0; y < n; y++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			x++;
		}
	}
}
