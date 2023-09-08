#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 *
 * @b: size of the memory to be allocated.
 * Return: a pointer to the allocated memory || if malloc fails, it should
 * cause normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);
	if (new == NULL)
		exit(98);
	return (new);
}
