#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int strl = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		strl++;

	c = malloc(sizeof(char) * (strl + 1));

	if (c == NULL)
		return (NULL);

	strl = 0;

	for (i = 0; s1[i]; i++)
		c[strl++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		c[strl++] = s2[i];

	c[strl] = '\0';

	return (c);
}
