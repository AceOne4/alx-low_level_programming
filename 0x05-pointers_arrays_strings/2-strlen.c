#include "main.h"
#include <stdio.h>

/**
 * _strlen - function count number of letters
 * @s: string entered
 * Return: size of array
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s++)
	{
		size++;
	}
	return (size);
}
