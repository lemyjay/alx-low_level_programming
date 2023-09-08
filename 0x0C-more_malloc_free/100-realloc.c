#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A function that reallocates a memory block using malloc and free.
 *
 * @ptr: a pointer that points to the memory previously allocated.
 * @old_size: the old size in bytes of the allocated space for ptr.
 * @new_size: the new size in bytes to the new memory block.
 *
 * Return: If success, a pointer to the reallocated memory || If failure or
 * new_size is 0, return NULL.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	unsigned int i, copy_size;
	char *src, *dest;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	if (old_size < new_size)
		copy_size = old_size;
	else
		copy_size = new_size;
	src = (char *)ptr;
	dest = (char *)new;
	for (i = 0; i < copy_size; i++)
		dest[i] = src[i];
	free(ptr);

	return (new);
}
