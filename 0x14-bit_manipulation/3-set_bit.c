#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given position
 *@n: number to change
 *@index: index of the bit to set
 *Return: 1 if succeed or -1 if fail.
 */

int set_bit(unsigned long int *n, unsigned int ind)
{
	unsigned int mask;

	if (ind > 64)
		return (-1);
	mask = 1 << ind;
	*n = *n | mask;
	return (1);
}
