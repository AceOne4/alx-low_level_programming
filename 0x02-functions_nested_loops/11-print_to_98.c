#include "main.h"
/**
 * print_to_98 - function count till 98
 * @n: is our start number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
				n++;
			}
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
			 printf("%d, ", n);
			n--;
			}
		}
	}
}
