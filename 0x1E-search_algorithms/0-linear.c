#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The size of the array to be searched
 * @value: The value to search for
 *
 * Return: The first index of the value or -1 if array is NULL or value
 * not present in array
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
