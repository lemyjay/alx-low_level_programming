#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2 dimensional array of
 * integers.
 *
 * @width: a pointer that points to the number of columns of the 2D array
 * @height: a pointer that points to the number of rows.
 * Return: NULL if failure(insufficient memory was available) or width
 * or height is 0 or negative || a pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{

	int **new_2D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_2D = (int **)malloc(height * sizeof(int *));

	if (new_2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		new_2D[i] = (int *)malloc(width * sizeof(int));
		if (new_2D[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(new_2D[j]);
			free(new_2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			new_2D[i][j] = 0;
	}

	return (new_2D);
}
