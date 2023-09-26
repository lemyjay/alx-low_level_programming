#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all elements of an
 * listint_t list.
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
