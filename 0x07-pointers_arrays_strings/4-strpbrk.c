#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strpbrk - A function that searches a string for any fo a set of bytes.
 *
 * @s: a pointer that holds the address to the string on which the operation
 * is to be performed
 * @accept: a pointer that holds the address to the character to search
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);/* Return the pointer ot the matchedcharacter */
			}
		}
	}
	return (NULL);/* No match found, return NULL */
}
