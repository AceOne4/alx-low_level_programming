#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print array in revese
 * @a: the array
 * @n: number of elment
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
