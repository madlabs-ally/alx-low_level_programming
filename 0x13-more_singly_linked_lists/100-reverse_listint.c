#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to pointer of first list element
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
        listint_t *n; 

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
                *head = n;
	}

	*head = p;
	return (*head);
}
