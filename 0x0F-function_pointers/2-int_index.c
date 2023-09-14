#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *
 * @size: the number of elements in the array
 * @array: the array to be searched
 * @cmp: the pointer to the function to be used to compare values
 *
 * Return: -1 if no element matches or if size <= 0 || the index of the first
 * element for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
