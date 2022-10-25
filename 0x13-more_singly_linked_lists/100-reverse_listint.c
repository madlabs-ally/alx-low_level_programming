#include "lists.h"

/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to pointer of first list element
 *
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
        listint_t *crt; 

	tmp = NULL;
	crt = NULL;

	while (*head != NULL)
	{
		crt = (*head)->next;
		(*head)->next = p;
		tmp = *head;
                *head = crt;
	}

	*head = tmp;
	return (*head);
}
