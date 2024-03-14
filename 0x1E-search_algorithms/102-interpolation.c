#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 *
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: First index where value is locate or -1 if array is NULL or value
 * is not present
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (true)
	{
		pos = low + ((
				(double)(high - low) /
				(array[high] - array[low])) *
				(value - array[low]));

		if (pos < size)
			printf("Value checked array[%lu] = [%d]\n",
					pos, array[pos]);
		else
		{
			printf("Value checked array[%lu] is out of range\n",
					pos);
			break;
		}

		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	return (-1);
}
