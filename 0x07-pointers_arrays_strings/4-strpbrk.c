#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string
 * @accept: string to match
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int k, f;
	char *p;

	k = 0;
	while (s[k] != '\0')
	{
		f = 0;
	        while (accept[j] != '\0')
		{
			if (accept[f] == s[k])
			{
				p = &s[k];
				return (p);
			}
			f++;
		}
		k++;
	}
	return (0);

}
