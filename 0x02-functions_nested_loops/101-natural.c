#include <stdio.h>
/**
 * main - program that sum all of 3 and 5
 * Return: (0) sucess
 */
int main(void)
{
	int n, sum;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d", sum);
	return (0);
}
