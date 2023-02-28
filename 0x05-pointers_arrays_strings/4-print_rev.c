#include "main.h"
#include <stdio.h>

/**
 * print_rev - func print str in reverse
 * @s: the str
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n')
}
