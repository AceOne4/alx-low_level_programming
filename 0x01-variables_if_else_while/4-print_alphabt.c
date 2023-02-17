#include <stdio.h>
/**
 * main -  that is alphapeat game that shows all alphbaet
 * main: prints alphabet
 * Return: 0 (Succes)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
