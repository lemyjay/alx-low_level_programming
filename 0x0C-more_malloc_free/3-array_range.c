#include "main.h"
#include <stdlib.h>

/**
 * array_range - A function that creates an array of integers with upper and
 * lower bounds inclusive, ordered from min to max.
 *
 * @min: the minimum value to start with(inclusive)
 * @max: the maximum value to end with(inclusive)
 * Return: a pointer to the newly created array || NULL if malloc fails or if
 * min > max.
 */

int *array_range(int min, int max)
{
	int i, range = 0;
	int *new;

	if (min > max)
		return (NULL);

	range = max - min + 1;
	new = malloc(range * sizeof(int));

	if (new == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		new[i] = min + i;

	return (new);
}
