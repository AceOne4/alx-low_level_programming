#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print array in revese
 * @a: the array
 * @n: number of elment
 */

void reverse_array(int *a, int n)
{
	for (int i = n - 1; i >= 0 ; i--)
	{
		printf("%d", a[i]);
		if (i != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
