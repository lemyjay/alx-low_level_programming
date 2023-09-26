#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * listint_t linked list.
 *
 * @head: a pointer to the head of the list.
 *
 * Return: 0 if list is empty, otherwise the sume of all the data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
