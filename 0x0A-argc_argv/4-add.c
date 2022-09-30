#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add 2 positive numbers and print the result
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If no number is passed to program, print 0.
 * If one of the numbers contain non-digits, print Error.
 * Return: 1 if error, 0 if function runs properly.
 */

int main(int argc, char *argv[])
{
	int to, k;
	char *p;
	int num;

	to = 0;

	if (argc > 1)
	{
		for (k = 1; argv[k]; k++)
		{
			num = strtol(argv[k], &p, 10);
			if (!*p)
				to += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", total);

	return (0);
}
