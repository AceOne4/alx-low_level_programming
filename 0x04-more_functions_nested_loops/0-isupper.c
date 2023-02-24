#include "main.h"

/**
 * _isupper - Function that print 0 if its charchter or 1 if itsnot
 * @c: is the cheaking case
 * Return: 0 if char 1 otherwise
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
