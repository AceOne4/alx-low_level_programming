#include "main.h"
/**
 * print_sign - function to check if number is greater or less than 0
 * @n:is the cheaker
 * Return: 1 if greater or less and 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
