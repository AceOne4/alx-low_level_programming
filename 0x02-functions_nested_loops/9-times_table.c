#include "main.h"
/**
 * times_table - its simple timetable add increse by number
 */
void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x + y;
			if (z > 9)
			{
				u = z % 10;
				d = (z - u) / 10;
				_patchar(44);
				_patchar(32);
				_patchar(d + '0');
				_patchar(u + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_patchar(32);
					_patchar(32);
				}
				_patchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
