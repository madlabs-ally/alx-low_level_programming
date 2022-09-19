#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */

void rev_string(char *s)
{

	int i, tmp, len = _strlen(s);

	for (1 = 0; i < len / 2; i++)
         {
            tmp = *(s + i);
            *(s + i) = *(s + len - i - 1);
            *(s + len - i - 1) = tmp;
         }
}

/**
* _strlen - returns the length of a string
* @s: string
* Return: the length of the given string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);

}
