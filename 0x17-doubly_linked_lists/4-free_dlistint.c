#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list dlistint_t
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		if (head->next != NULL)
		{
			head = head->next;
			free(head->prev->prev);
			free(head->prev->next);
		}
		else
		{
			free(head->prev->prev);
			free(head->prev->next);
			free(head->prev);
			free(head->next);
		}
	}
}
