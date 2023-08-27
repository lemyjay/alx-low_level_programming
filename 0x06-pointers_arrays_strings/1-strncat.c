#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncat - A function that concatenates two strings
 * This function is similar to the _strcat function, except that;
 * it will use at most n bytes from src
 * and src does not need to be null-terminated if it contains n or more bytes.
 * it does all this using pointers.
 *
 * @src: a pointer that holds the address to the source of the string
 * @dest: a pointer that holds the address to the destination buffer
 * @n: store the value of the number of bytes to use from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lengthSrc = 0;
	int lengthDest = 0;
	int i;

	while (src[lengthSrc] != '\0')
		lengthSrc++;

	while (dest[lengthDest] != '\0')
		lengthDest++;

	for (i = 0; i < n  && src[i] != '\0'; i++)
		dest[lengthDest + i] = src[i];

	if (lengthSrc < n)
		dest[lengthDest + i] = '\0';

	return (dest);
}
