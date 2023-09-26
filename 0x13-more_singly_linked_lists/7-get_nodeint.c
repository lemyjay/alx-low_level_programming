#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a listint_t
 * linked list.
 *
 * @head: a pointer to the head of the list.
 * @index: the index of the node, starting at 0.
 *
 * Return: if the node does not exist, return NULL. Otherwise, return a pointer
 * to the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}

	return (NULL);
}
