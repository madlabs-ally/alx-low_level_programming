#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

void print_number(int n)
{

	unsigned int num = n1;

	if (n1 < 0)
	{
		n1 = -n;
		_putchar('-')
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
