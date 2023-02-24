#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the big number
 * Return: 0 (succes)
 */
int main(void)
{
	long x, maxf;
	long num = 612852475143;
	double squ = sqrt(num);

	for (x = 1; x <= squ ; x++)
	{
		if (num % x == 0)
		{
			maxf = num / x;
		}
	}
	printf("%ld\n", maxf);
	return (0);
}
