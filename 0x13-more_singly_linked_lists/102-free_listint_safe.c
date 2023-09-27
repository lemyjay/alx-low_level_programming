#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t linked list safely.
 *
 * @h: a pointer that points to the pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	size_t node_count = 0;

	while (current)
	{
		listint_t *temp = current->next;

		current->next = NULL;
		free(current);
		current = temp;
		node_count++;
	}

	*h = NULL;

	return (node_count);
}

