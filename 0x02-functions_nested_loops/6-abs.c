#include "main.h"
/**
 * _abs - function to get the absloute number of any integer
 * @c: is the cheaker
 * Return: the absloute number
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_c = c * -1;

		return (abs_c);
	}
	else
	{
		return (c);
	}
}
