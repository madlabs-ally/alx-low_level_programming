#include "main.h"
/**
 * _isalpha - function to check if d is a letter, lowercase or uppercase
 * @d: is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int d)
{
	if ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
