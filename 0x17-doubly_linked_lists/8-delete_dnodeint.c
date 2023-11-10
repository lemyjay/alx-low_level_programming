#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node at index index
 * of a doubly linked list dlistint_t
 *
 * @head: a pointer that points to the pointer of the head of the list
 * @index: the position to which the node is to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (!current)
		return (-1);

	while (current != NULL)
	{
		if (index == count && current->next == NULL)
		{
			if (index != 0)
				current->prev->next = NULL;
			free(current);
			*head = NULL;
			return (1);
		}
		else if (index == count)
		{
			if (index == 0)
			{
				*head = current->next;
				if (current->next != NULL)
					current->next->prev = NULL;
			}
			else
			{
				current->prev->next = current->next;
				if (current->next != NULL)
					current->next->prev = current->prev;
			}
			free(current);
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1);
}
