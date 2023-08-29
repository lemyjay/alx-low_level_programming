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
 * on which the operation is to be performed
 * @needle: a pointer that holds the address to the character to search
 * Return: a pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
