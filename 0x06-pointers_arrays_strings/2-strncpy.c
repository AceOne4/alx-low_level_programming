#include "main.h"

/**
 * *_strncpy - copy at most inputted number
 * @dest: the bufffer sorting the string copy
 * @src: the source
 * @n: teh max byte of copied from src
 * Return: A pointer pf the result
 */
char *_strncpy(char *dest, char *src, int n)
{
	int ix = 0, lenSrc = 0;

	while (src[ix++])
		lenSrc++;

	for (ix = 0; src[ix] && ix < n; ix++)
		dest[ix] = src[ix];

	for (ix = lenSrc; ix < n; ix++)
		dest[ix] = '\0';

	return (dest);
}
