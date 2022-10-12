#include "function_pointers.h"

/**
 * array_iterator - Executes a function as a parameter
 * on each element of an array
 *
 * @array: An array of paramters (values) to be passed to @action
 *
 * @size: Size/length of @array
 *
 * @action: Pointer to a function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
