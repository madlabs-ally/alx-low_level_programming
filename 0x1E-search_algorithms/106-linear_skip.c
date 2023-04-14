#include "search_algos.h"

/**
 * linear_skip - searches for a value contained in a skip list; assumes a
 * list with sorted values and a single skip layer with nodes at every index
 * which is a multiple of the square root of the size of the list
 *
 * @list: pointer to the head of the skip list to traverse
 * @value: value to search for
 * Return: pointer to the first node where value is located, or NULL if list
 * is NULL or value not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
		temp = temp->express;

	stop = temp;
	while (stop && stop->next != stop->express)
		stop = stop->next;

	if (temp->express)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, temp->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, stop->index);

	while (temp != stop && temp->n < value)
		temp = temp->next;

	if (temp == stop)
		return (NULL);
	return (temp);
}

