#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *s)
{
	int k, l;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (k = 0; *(s + k); l++)
	{
		for (l = 0; l < 52; l++)
		{
			if (a[l] == *(s + k))
			{
				*(s + k) = b[l];
				break;
			}
		}
	}
	return (s);
}
