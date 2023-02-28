#include "main.h"
#include <stdio.h>

/**
 * puts_half - function print half of the array
 * @str: the string
 */
void puts_half(char *str)
{
	int j = 0;
	int i;

	while (str[j])
	{
		j++;
	}

	if (j % 2 != 0)
	{
		j--;
	}
	for (i = 0; i < j / 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
