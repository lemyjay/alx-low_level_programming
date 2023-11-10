#include "lists.h"

/**
 * print_dlistint - A function that prints all the elements in a doubly linked
 * list dlistint_t
 *
 * @h: the pointer to the head of the list
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a = 0;
	const dlistint_t *current = h;

	if (current == NULL)
		return (a);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		a++;
		current = current->next;
	}

	return (a);
}
