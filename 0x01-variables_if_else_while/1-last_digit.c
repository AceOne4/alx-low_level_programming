#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digits of random number and compare it with 5 6 and 0
 * main: this program will assign a random number to the variable
 * Return: 0 (succes)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int num = n % 10;
if (num > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, num);
}
else if (num < 5 && num != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, num);
}
else if (num == 0)
{
printf("Last digit of %d is %d and is 0\n", n, num);
}
return (0);
}
