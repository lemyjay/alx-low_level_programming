#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array using malloc
 *
 * @nmemb: number of elements in the array.
 * @size: size in bytes of each of the elements of the array
 * Return: a pointer to the allocated memory || NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *new;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		new[i] = 0;

	return ((void *)new);
}
