#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that counts the elements in a linked list.
 *
 * @h: a pointer to the head of the list.
 *
 * Return: the number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
