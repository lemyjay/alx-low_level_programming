#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node at the end of a doubly
 * linked list dlistint_t
 *
 * @head: the pointer that points to the head of the list
 * @n: the integer to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (current != NULL)
	{
		while (current->next != NULL)
			current = current->next;
		new->prev = current;
		current->next = new;
	}
	else
		*head = new;

	return (new);
}
