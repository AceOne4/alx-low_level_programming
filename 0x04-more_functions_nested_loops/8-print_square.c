#include "main.h"
/**
 * print_square - function that print straight line
 * @size: is the long of length of the line
 */
void print_square(int size)
{
	int x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
