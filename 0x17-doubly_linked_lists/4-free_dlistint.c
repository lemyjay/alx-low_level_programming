#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	while (head->next != NULL)
		head = head->next;
	head = head->prev;
	free(head->next->prev);
	while(head->prev != NULL)
	{
		head = head->prev;
		free(head->next->prev);
		free(head->next->next);
	}
	free(head->next->prev);
	free(head->next->next);
}
