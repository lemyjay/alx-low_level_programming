#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - A function that prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: a pointer that holds the address to the array or first integer of the
 * array.
 * @size: holds the value of the size of the array
 * Returns void.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	long int sumDiag1 = 0;
	long int sumDiag2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumDiag1 += a[(i * size) + i];
		}
		sumDiag2 += a[(i * size) + size - i - 1];
	}

	printf("%ld, %ld\n", sumDiag1, sumDiag2);
}
