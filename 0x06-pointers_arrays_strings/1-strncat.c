#include "main.h"
#include <stdio.h>

/**
 * *_strncat - function unction is similar to the _strcat
 * @dest: first
 * @src: sec
 * @n:  numbers of bytes
 * Return: dest for secces
 */
char *_strncat(char *dest, char *src, int n)
{
	int ix = 0, dlen = 0;

	while (dest[ix++])
		dlen++;
	for (ix = 0; src[ix] && ix < n; ix++)
		dest[dlen++] = src[ix];
	return (dest);
}
