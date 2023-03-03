#include "main.h"

/**
 * *string_toupper - function change letter to upper case
 * @str : string to be changed
 * Return: the uppercased string
 */
char *string_toupper(char *str)
{
	int ix = 0;

	while (str[ix])
	{
		if (str[ix] >= 'a' && str[ix] <= 'z')
		{
			str[ix] -= 32;
			ix++;
		}
	}
	return (str);
}
