#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - A function that a string
 * works exactly like the strncpy in the standard library.
 *
 * @src: a pointer that holds the address to the source of the string
 * @dest: a pointer that holds the address to the destination buffer
 * @n: store the value of the number of bytes to use from src
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n  && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
