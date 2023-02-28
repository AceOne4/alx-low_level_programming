#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that sawy the value of two integers
 * @a: first integer
 * @b: second inteeger
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

