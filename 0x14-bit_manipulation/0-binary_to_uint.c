#include "main.h"

/**
 * binary_to_uint - converts a string binary to an unsigned int
 *@b: string of the binary number
 *Return: the value of the conversion or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int m;
	int a, c;

	if (c == NULL)
		return (0);
	a = 0;

	while (b[a + 1] != '\0')
		a++;

	c = 1;
	m = 0;

	while (a >= 0)
	{
		if (b[a] != '1' && b[a] != '0')
			return (0);

		m += (b[a] - '0') * c;
		c *= 2;
		a--;
	}
	return (m);
}
