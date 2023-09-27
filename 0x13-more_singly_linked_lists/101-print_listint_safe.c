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
	const listint_t *slow_ptr = head, *fast_ptr = head;
	int is_loop_detected = 0;
	size_t count = 0;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			is_loop_detected = 1;
			break;
		}
	}
	slow_ptr = head;
	while (slow_ptr)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		count++;
		if (is_loop_detected && slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr->next, slow_ptr->next->n);
			break;
		}
		slow_ptr = slow_ptr->next;
		if (is_loop_detected)
			fast_ptr = fast_ptr->next;
	}
	return (count);
}
