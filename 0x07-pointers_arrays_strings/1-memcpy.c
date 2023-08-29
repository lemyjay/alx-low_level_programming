#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - A function that copies memory area
 *
 * The _memcpy() copies n bytes from memory area src to memory area dest.
 *
 * @src: a pointer that holds the address to src
 * @dest: a pointer that holds the address to dest
 * @n: stores the number of bytes of the memory area src to copy to memory
 * area dest
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
