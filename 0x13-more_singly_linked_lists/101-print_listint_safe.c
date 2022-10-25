#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: head node
 *
 * Return: amount of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	int size = 0, k;
	const listint_t *tmp[100];

	if (!head)
		exit(98);

	while (head)
	{
		for (k = 0; k < size; k++)
		{
			if (tmp[i] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (size);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp[size] = head;
		size++;
		head = head->next;
	}
	return (size);
}
