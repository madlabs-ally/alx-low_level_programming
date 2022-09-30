#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 * Return: 0 if s1 and s2 are equal
 *        negative integer if the stopping character
 *                in @s1 was less than the stopping
 *                character in @s2
 *        positive integer if the stopping character
 *                in @s1 was greater than the stopping
 *                character in @s2
*/

int _strcmp(char *s1, char *s2)
{

	int k = 0, differ = 0;

	while (1)
	{
		if (s1[k] == '\0' && s2[k] == '\0')
			break;
		else if (s1[k] == '\0')
		{
			differ = s2[k];
			break;
		}
		else if (s2[k] == '\0')
		{
			differ = s1[k];
			break;
		}
		else if (s1[k] != s2[k])
		{
			differ = s1[k] - s2[k];
			break;
		}
		else
			k++;
	}
	return (differ);
}
