#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: the first element
 * @n: new node data
 * @idx: the index position for the insertion
 * Return: the address of the inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *idx_node;
	unsigned int k = 0;

	if (head == NULL || (*head == NULL && idx != 0))
		return (NULL);

	idx_node = *head;
	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL && idx == 0)
	{
		node->next = NULL;
		*head = node;

		return (node);
	}
	if (*head != NULL && idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (; k < idx - 1 && idx_node != NULL; k++)
		idx_node = (idx_node->next) ? idx_node->next : NULL;

	if (((idx - 1 >= k + 1) || (idx - 1 == k)) && idx_node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = (idx_node->next) ? idx_node->next : NULL;
	idx_node->next = node;

	return (node);
}
