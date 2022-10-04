#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int x, y;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; x++)
		;

	a = malloc(x * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		a[y] = str[y];
	a[y] = '\0';

	return (a);
}
