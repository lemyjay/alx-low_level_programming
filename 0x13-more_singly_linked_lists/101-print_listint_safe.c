#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - A function that prints a listint_t linked list safely.
 *
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise = head, *hare = head;
	size_t count = 0;
	int loop_detected = 0;

	if (head == NULL)
		exit(98);

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			loop_detected = 1;
			break;
		}
	}
	if (!loop_detected)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
		while (tortoise != hare)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			tortoise = tortoise->next;
			count++;
		}
		printf("[%p] %d\n", (void *)hare, hare->n);
		count++;
	}

	return (count);
}
