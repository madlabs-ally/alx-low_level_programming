#include "main.h"

/**
 * print_alphabet_x10 - function to print abcd 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)

{

	char d, i;



	for (i = 0; i <= 9; i++)

	{

		for (d = 'a'; d <= 'z'; d++)

		{

			_putchar(d);

		}

		_putchar('\n');

	}

}
