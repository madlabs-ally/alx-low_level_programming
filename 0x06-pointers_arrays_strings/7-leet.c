#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: address of s
 */

char *leet(char *s)

{
	int k, l;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (k = 0; *(s + k); k++)
	{
		for (l = 0; l <= 9; l++)
		{
			if (a[l] == *(s + l))
				*(s + k) = b[l];
		}
	}
	return (s);
}
