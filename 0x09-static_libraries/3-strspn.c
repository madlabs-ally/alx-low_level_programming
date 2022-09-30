#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in 's'
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, f, b, safe;

	b = 0;

	for (k = 0; s[k] != '\0'; k++)
	{
		safe = 0;

		for (f = 0; accept[f] != '\0'; f++)
		{
			if (s[k] == accept[f])
			{
				b++;
				safe = 1;
			}
		}
		if (safe == 0)
		{
			return (b);
		}
	}

	return (0);
}
