#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - A function that reverses the content of an array of integers
 *
 * @a: a pointer that holds the address to the array or
 * first element in the array
 * @n: holds the value of the number of elements of the array
 * Returns void.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - (i + 1)];
		a[n - (i + 1)] = temp;
	}
}
