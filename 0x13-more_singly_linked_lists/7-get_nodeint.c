#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the first element
 * @index: the index to return
 * Return: the element to the nth index or null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *node_index;

	if (head == NULL)
		return (NULL);

	node_index = head;

	for (; m < index && node_index->next != NULL; m++)
		node_index = (node_index->next) ? node_index->next : NULL;

	if (m == index)
		return (node_index);

	return (NULL);
}
