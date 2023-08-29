#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_chessboard - A function that prints the chessboard.
 *
 * @a: a pointer that holds the address to the array
 * Returns void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}

