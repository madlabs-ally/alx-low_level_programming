#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: number to convert
 * @index: index of the bit to set
 * Return: 1  or -1
 */

int clear_bit(unsigned long int *n, unsigned int in)
{
	unsigned int mask;

	if (in > 64)
		return (-1);
	mask = 1 << in;
	*n &= ~mas;
	return (1);
}
