#include "main.h"

/**
 * more_numbers - function count till 14 for 10 times
 */
void more_numbers(void)
{
	int x, y;

	while (x <= 10)
	{
		for (y = 0; y < 15; y++)
		{
			if (y > 9)
			{
				_putchar(y / 10 + '0');
			}
			else
			{
				_putchar(y % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
