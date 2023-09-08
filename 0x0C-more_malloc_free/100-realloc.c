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
	unsigned int csize, i;
	char *src, *dest;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));
	
	dest = malloc(new_size);

	if (!dest)
		return (NULL);

	src = ptr;
	if (old_size < new_size)
		csize = old_size;
	else
		csize = new_size;

	for (i = 0; i < csize; i++)
		dest[i] = src[i];
	free(ptr);

	return (dest);
}
