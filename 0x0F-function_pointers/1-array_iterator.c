#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: a pointer to the function to be used
 * Returns void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
