#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_t *add_nodeint - A function that adds a new node at the beginning
 * of a listint_t list.
 *
 * @head: a pointer to the pointer of the head of the list.
 * @n: the data section (integer) to be added.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
