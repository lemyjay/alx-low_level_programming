#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump
 * search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value, or -1 if not
 * found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	prev = 0;
	printf("Value checked array[%lu] = [%d]\n",
			(unsigned long)prev, array[prev]);

	while (array[prev] < value)
	{
		size_t next = prev + jump;

		if (next >= size)
		{
			next = size - 1;
			break;
		}

		if (array[next] >= value)
			break;

		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)next, array[next]);
		prev += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			(unsigned long)prev, (unsigned long)(prev + jump));
	for (i = prev; i <= prev + jump && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				(unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
