#include "main.h"
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int k, f;

	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (f = 0; needle[f] != '\0'; f++)
		{
			if (haystack[k + f] != needle[f])
				break;
		}
		if (!needle[f])
			return (&haystack[k]);
	}
	return (NULL);
}
