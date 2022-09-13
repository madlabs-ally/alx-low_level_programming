#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @d:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int d)
{
	if (d > 0 || d == 0)
	{
	return (d);
	}
	else
	return (d * -1);
}
