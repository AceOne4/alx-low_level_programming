#include "main.h"
#include <stdio.h>

/**
 * rev_string - rev string
 * @s: the str
 */

void rev_string(char *s)
{
	int len = 0, ix = 0;
	char temp;

	while (s[ix++])
	{
		len++;
	}
	for (ix = len - 1; ix >= len / 2; ix--)
	{
		temp = s[ix];
		s[ix] = s[len - ix - 1];
		s[len - ix - 1] = temp;
	}
}
