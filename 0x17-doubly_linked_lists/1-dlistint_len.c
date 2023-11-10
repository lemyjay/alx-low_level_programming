#include "lists.h"

/**
 * dlistint_len - A function that returns the number of elements in a linked
 * list dlistint_t list.
 *
 * @h: the pointer to the head of the list
 *
 * Return: the number of element in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a = 0;
	const dlistint_t *current = h;

	if (current == NULL)
		return (a);

	while (current != NULL)
	{
		current = current->next;
		a++;
	}

	return (a);
}
