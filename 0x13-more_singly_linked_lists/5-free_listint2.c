#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - A function that frees a listint_t list and sets the head
 * to NULL.
 *
 * @head: a pointer to the pointer of the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
