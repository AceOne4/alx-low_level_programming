#include "main.h"

/**
 * _strcmp - function that compare two strigs
 * @s1:  first arrg
 * @s2: second arg
 * Return: 0 or s1 or S2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
