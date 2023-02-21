#include "main.h"
/**
 *  _isalpha - function that check if its alphabeat or no
 *  _isalpha: is simple function that check fpr alpahbeat
 *  @c: the cheaker to be checked
 *  Return: 1 if c is letter otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
