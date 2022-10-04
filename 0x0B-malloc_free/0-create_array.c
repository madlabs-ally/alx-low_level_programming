#include "main.h"

/**
* create_array -> creating array
* @size: size of array to be created
* @c: character an array is initialized with
* Return: a pointer to an array
*/

char *create_array(unsigned int size, char c)
{
      char *array;
      unsigned int j;

      if (size == 0)
                return (NULL);
      array = malloc(size * sizeof(*array));

	if (array == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		array[j] = c;

	return (array);
}
