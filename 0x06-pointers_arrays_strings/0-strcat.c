#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcat - A function that concatenates two strings
 * it appends the src string to the dest string,
 * overwriting the terminating null byte \0 at the end of dest
 * and then adds a termination null byte.
 * it does all this using pointers.
 *
 * @src: a pointer that holds the address to the source of the string
 * @dest: a pointer that holds the address to the destination buffer
 * Return: the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int lengthSrc = 0;
	int lengthDest = 0;
	int i;

	while (src[lengthSrc] != '\0')
		lengthSrc++;

	while (dest[lengthDest] != '\0')
		lengthDest++;

	for (i = 0; i < lengthSrc; i++)
		dest[lengthDest + i] = src[i];

	dest[lengthDest + i] = '\0';

	return (dest);
}
