#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte \0, to the buffer pointed to by dest.
 *
 * @src: a pointer that holds the address to the source of the string
 * @dest: a pointer that holds the address to the destination buffer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (src[length] != '\0')
		length++;
	length++;

	for (i = 0; i < length; i++)
		dest[i] = src[i];

	return (dest);
}
