i#include "main.h"

/**
 * _isdigit - Function that print 0 if its charchter or 1 if itsnot
 * @c: is the cheaking case
 * Return: 0 if char 1 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
