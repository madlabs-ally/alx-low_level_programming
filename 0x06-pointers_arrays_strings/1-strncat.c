#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int m)
{

	int d = 0, i = 0;

	while (dest[d])
		i++;

        for (d = 0; src[0] && d < m; d++)
             dest[i++] = src[d];

	return (dest);

}
