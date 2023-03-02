#include "main.h"
#include <stdio.h>

/**
 * *_strcat - function that take the first arrgument and print it with new line
 * @dest: first arg
 * @src: sec arg
 * Return: dest for succes
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
