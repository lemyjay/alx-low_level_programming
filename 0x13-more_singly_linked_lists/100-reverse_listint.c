#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 *
 * @head: a pointer to the pointer to the head of the list.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}

	*head = previous;

	return (*head);
}
