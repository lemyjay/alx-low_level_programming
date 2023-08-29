#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strstr- A function that locates a substring.
 *
 * The _strstr() finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes (\0) are not compared
 *
 * @haystack: a pointer that holds the address to the string
 * on which the operation
 * is to be performed
 * @needle: a pointer that holds the address to the character to search
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;/* Exit inner loop if mismatch is found */

			if (needle[j + 1] == '\0')
				return (&haystack[i]);/* Return the pointer to the located substring */
		}
	}

	return (NULL);/* Substring not found */
}
