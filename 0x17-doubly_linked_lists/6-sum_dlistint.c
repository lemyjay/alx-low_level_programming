#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all the data (n)
 * of a doubly linked list dlistint_t.
 *
 * @head: the pointer to the head of the list
 *
 * Return: the sum of all the data (n), or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
