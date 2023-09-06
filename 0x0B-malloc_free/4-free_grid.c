#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid created by alloc_grid.
 *
 * @grid: The 2D grid to be freed.
 * @height: The height (number of rows) of the grid.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		int i;

		for (i = 0; i < height; i++)
			free(grid[i]); /* Free each row */
		free(grid); /* Free the array of row pointers */
	}
}
