#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node at a given
 * position.
 *
 * @head: a pointer that points to the pointer of the head of the list.
 * @idx: the index of the list where the new node should be added. Index starts
 * at 0.
 * @n: the data to be inserted at position idx.
 *
 * Return: the address of the new node, or NULL if it failed. If it is not
 * possible to add the new node at index idx, the new node is not added and
 * NULL is returned.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *insert_new_node, *temp;

	if (head == NULL)
		return (NULL);

	insert_new_node = malloc(sizeof(listint_t));
	if (insert_new_node == NULL)
		return (NULL);

	insert_new_node->n = n;

	if (idx == 0)
	{
		insert_new_node->next = *head;
		*head = insert_new_node;
		return (insert_new_node);
	}

	temp = *head;
	for (count = 0; count < idx - 1; count++)
	{
		if (temp == NULL)
		{
			free(insert_new_node);
			return (NULL);
		}
		temp = temp->next;
	}

	if (temp == NULL)
	{
		free(insert_new_node);
		return (NULL);
	}

	insert_new_node->next = temp->next;
	temp->next = insert_new_node;

	return (insert_new_node);
}
