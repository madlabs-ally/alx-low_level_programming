#include "lists.h"

/**
 * free_listint2 - free a listint_t list.
 * @head: address of the first element
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *h, *p;

	if (head == NULL)
		return;
	p = *head;
	do {
		h = p;
		p = p->next;
		free(h);
	} while (p != NULL);
	*head = NULL;
}
