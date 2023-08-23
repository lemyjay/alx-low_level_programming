#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - A function that prints n elements of an array of integers,
 * followed by a new line.
 *
 * @a: a pointer that holds the address of the array or the first element
 * @n: holds the value of the number of elements in the array
 * returns void
 */

void print_array(int *a, int n)
{
	int i;

	if (n >= 1)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));
			if (i != n - 1)
				printf(", ");
			else
				printf("\n");
		}
	}
}
