#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of a doubly
 * linked list dlistint_t
 *
 * @head: a pointer that points to the pointer of the head of the list
 * @n: the integer to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	if (current != NULL)
	{
		new->next = current;
		current->prev = new;
	}

	*head = new;

	return (*head);
}
