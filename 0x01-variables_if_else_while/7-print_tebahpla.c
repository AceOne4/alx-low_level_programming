#include <stdio.h>
/**
 * main -  that is alphapeat game that shows all alphbaet
 * main: prints alphabet
 * Return: 0 (Succes)
 */
int main(void)
{
	char cha;

	for (cha = 'z'; cha <= 'a'; cha--)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
