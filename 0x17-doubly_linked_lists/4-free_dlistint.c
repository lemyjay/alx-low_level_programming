#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
