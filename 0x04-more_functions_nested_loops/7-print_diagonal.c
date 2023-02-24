#include "main.h"

/**
 * print_diagonal - function print diagonal line
 * @n- number of lines
 */
void print_diagonal(int n)
{
	int x, y;

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
				_putcahr(32);
			}
			_putcahr(92);
			_putcahr('\n');
			x++;
		}
	}
}
