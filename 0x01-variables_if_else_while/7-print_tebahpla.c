#include <stdio.h>
/**
 * main -  that is alphapeat game that shows all alphbaet
 * main: prints alphabet
 * Return: 0 (Succes)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
