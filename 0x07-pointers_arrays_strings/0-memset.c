#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - A function that fills memory with a constant byte.
 *
 * The _memset() fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 *
 * @s: a pointer that holds the address to the array
 * @b: holds the value of the constant byte
 * @n: store the value of the first number of bytes of the memory area
 * pointed to by s to fill
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
