#include "main.h"

/**
 * argstostr - concatenate all arguments of your program with newline
 * @ac: argument count
 * @av: double pointer to array of strings passed to main
 * Return: Null if fail, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *a, *retp;
	int w, x, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (w = 0, total = 0; w < ac; w++)
	{
		for (x = 0; *(*(av + w) + x) != '\0'; x++, total++)
			;
		total++;
	}
	total++;

	a = malloc(total * sizeof(char));
	if (a == NULL)
		return (NULL);

	retp = a;
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x] != '\0'; x++)
		{
			*a = av[w][x];
			a++;
		}
		*a = '\n';
		a++;
	}
	return (retp);
}
