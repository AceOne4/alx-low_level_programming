#include "main.h"
/**
 *  _islower - is function that check if it lower case or no
 * @c: is the char to be checked
 * Return: 1 if char lower case othwerwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
