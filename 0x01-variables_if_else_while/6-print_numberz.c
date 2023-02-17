#include <stdio.h>
/**
 * main -  that is alphapeat game that shows all alphbaet
 * main: prints alphabet
 * Return: 0 (Succes)
 */
int main(void)
{
	int ch = 48;

	while (ch < 58)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
