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
		i = (j +1) / 2;
	}
	else 
	{
		i = j / 2;
	}
	for (; i < j ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
