#include "main.h"

/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 * Return: @s
*/

char *string_toupper(char *str)
{

	int k = 0;

	while (str[k] != '\0')
	{
		if (str[k] >= 'a' && str[k] <= 'z')
			str[k] -= 32;
		k++;
	}
	return (str);
}
