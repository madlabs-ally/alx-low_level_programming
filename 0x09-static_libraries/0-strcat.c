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

	int srt = 0, dest_v = 0;

	while (dest[srt++])
		dest_v++;

	for (srt = 0; src[srt]; srt++)
		dest[dest_v++] = src[srt];

	return (dest);
}
