#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 *               in order separated by a comma followed by a space.
 * @m: The number to begin counting at.
 */
void print_to_98(int m)
{
	if (m >= 98)
	{
		while (m > 98)
			printf("%d, ", m--);
		printf("%d\n", m);
	}

	else
	{
		while (m < 98)
			printf("%d, ", m++);
		printf("%d\n", m);
	}
}
