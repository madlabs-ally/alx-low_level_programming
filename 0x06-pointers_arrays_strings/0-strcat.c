#include "main.h"

/**
 * _strcat - function that concatenates
 *          two strings.
 * @dest: pointer to des input
 * @src: pointer to src input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{

	int e = 0, e2 = 0;

	while (dest[e++])
		e2++;

	for (e = 0; src[e] ; e++)
		dest[e2++] = src[e];
       
	return (dest);
}
