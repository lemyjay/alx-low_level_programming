#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - A function that a string
 * works exactly like the strncpy in the standard library.
 *
 * The  strcpy() function copies the string pointed to by src, including the
 * terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
 * The strncpy() function is similar, except that at most n bytes of src are
 * copied.
 * If  there  is no null byte among the first n bytes of src,
 * the string placed in dest will not be null-terminated.
 * If the length of src is less than n, strncpy() writes additional null bytes
 * to dest to ensure that a total of n bytes are written.
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

	/**
	 * Writing of additional null bytes to dest to ensure that
	 * a total of n bytes are written if the length of src is less than n
	 */
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
