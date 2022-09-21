#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int srt = 0, dest_v = 0;

	while (dest[srt++])
		dest_v++;

	for (srt = 0; src[srt] && srt < n; srt++)
		dest[dest_v++] = src[srt];

	return (dest);

}
