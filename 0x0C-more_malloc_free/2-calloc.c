#include "main.h"

/**
 * array_range - create an array of integers inclusive of min and max
 * @min: min value to include
 * @max: max value to include
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *q, k;

	if (min > max)
		return (NULL);

	q = malloc((max - min + 1) * sizeof(*q));

	if (q == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		q[k] = min;

	return (q);

}
