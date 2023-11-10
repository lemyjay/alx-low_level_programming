#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node of a doubly
 * linked list dlistint_t.
 *
 * @head: the pointer to the head of the list
 * @index: the index of the node to be returned
 *
 * Return: the node or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int a = -1, i = 0;
	dlistint_t *current = head;

	if (current == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		current = current->next;
		a++;
	}
	a++;
	current = head;

	if (index > a)
		return (NULL);

	while (i != index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
