#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a listint_t
 * linked list.
 *
 * @head: a pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* Check for loop */
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow); /* Address of the loop start */
		}
	}

	return (NULL); /* No loop found */
}

