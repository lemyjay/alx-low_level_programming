#include "lists.h"

/**
 * insert_dnodeint_at_index - A function that inserts a new node at a given
 * position.
 *
 * @h: a pointer that points to the pointer to the head of the list
 * @idx: the index of the list where the new node is to be added.
 * @n: the integer to be added
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new = malloc(sizeof(dlistint_t)), *current = *h;

	if (new == NULL)
		return (NULL);
	if (current == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}

	new->n = n;
	while (current != NULL)
	{
		if (count == idx)
		{
			new->prev = current->prev;
			new->next = current;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		else if (idx == count + 1 && current->next == NULL)
		{
			new = add_dnodeint_end(&current, n);
			return (new);
		}

		current = current->next;
		count++;
	}
	free(new);
	return (NULL);
}
