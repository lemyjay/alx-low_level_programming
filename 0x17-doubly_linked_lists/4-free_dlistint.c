#include "lists.h"

/**
 * free_dlistint - A function that frees a doubly linked list dlistint_t
 *
 * @head: the pointer to the head of the list
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
